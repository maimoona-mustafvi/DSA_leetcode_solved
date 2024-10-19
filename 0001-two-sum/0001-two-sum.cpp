class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       // Build and check hash table while iterating
    unordered_map<int, int> numMap;  // <value, index>
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        
        // If complement exists in the hash table and isn't the same element
        if (numMap.find(complement) != numMap.end()) {
            return {numMap[complement], i};
        }
        
        // Insert the current number and its index into the hash table
        numMap[nums[i]] = i;
    }
    
    // Return an empty vector if no solution is found
    return {};
    }
};