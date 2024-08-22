class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        if (nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1);  // Ensure nums1 is the smaller array
        }

        int m = nums1.size();
        int n = nums2.size();
        int low = 0, high = m;

        while (low <= high) {
            int partition1 = (low + high) / 2;
            int partition2 = (m + n + 1) / 2 - partition1;

            int maxLeft1;
            if (partition1 == 0) {
                maxLeft1 = INT_MIN;  // No elements on the left side in nums1
            } else {
                maxLeft1 = nums1[partition1 - 1];
            }

            int minRight1;
            if (partition1 == m) {
                minRight1 = INT_MAX;  // No elements on the right side in nums1
            } else {
                minRight1 = nums1[partition1];
            }

            int maxLeft2;
            if (partition2 == 0) {
                maxLeft2 = INT_MIN;  // No elements on the left side in nums2
            } else {
                maxLeft2 = nums2[partition2 - 1];
            }

            int minRight2;
            if (partition2 == n) {
                minRight2 = INT_MAX;  // No elements on the right side in nums2
            } else {
                minRight2 = nums2[partition2];
            }

            // Check if we have found the correct partitions
            if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1) {
                // If the total number of elements is odd
                if ((m + n) % 2 == 1) {
                    return std::max(maxLeft1, maxLeft2);
                } else {
                    // If the total number of elements is even
                    return (std::max(maxLeft1, maxLeft2) + std::min(minRight1, minRight2)) / 2.0;
                }
            } else if (maxLeft1 > minRight2) {
                // Move left in nums1
                high = partition1 - 1;
            } else {
                // Move right in nums1
                low = partition1 + 1;
            }
        }

        throw std::invalid_argument("Input arrays are not sorted.");
    }
};
