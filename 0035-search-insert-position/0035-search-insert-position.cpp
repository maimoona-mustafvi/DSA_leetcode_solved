class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;  // To prevent potential overflow
            if (nums[mid] == target) {
                return mid;  // Target found
            } else if (nums[mid] < target) {
                low = mid + 1;  // Move to the right half
            } else {
                high = mid - 1;  // Move to the left half
            }
        }
        
        // Target not found, return the insertion point
        return low;
    }
};
