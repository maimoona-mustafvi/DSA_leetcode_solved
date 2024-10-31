class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end()); // Sort the array for easier duplicate handling and two-pointer approach

        for (int i = 0; i < nums.size(); i++) {
            // `left` is set to the current `nums[i]` value for easier understanding
            int left = nums[i];
            
            // Skip duplicate values for `left` to ensure unique triplets in results
            if (i > 0 && left == nums[i - 1]) {
                continue;
            }

            int mid = i + 1;             // `mid` is the pointer just after `i`
            int right = nums.size() - 1; // `right` is the pointer starting from the end of the array

            // Use two pointers to find a pair that, with `left`, sums to zero
            while (mid < right) {
                int total = left + nums[mid] + nums[right]; // Calculate the sum of the current triplet

                if (total > 0) {
                    right--; // If the sum is too high, move `right` left to try a smaller number
                } else if (total < 0) {
                    mid++; // If the sum is too low, move `mid` right to try a larger number
                } else {
                    // Found a triplet that sums to zero
                    res.push_back({left, nums[mid], nums[right]});
                    mid++; // Move `mid` to check for other potential pairs

                    // Skip duplicates for `mid` to avoid repeating the same triplet
                    while (nums[mid] == nums[mid - 1] && mid < right) {
                        mid++;
                    }
                }
            }
        }
        return res;
    }
};