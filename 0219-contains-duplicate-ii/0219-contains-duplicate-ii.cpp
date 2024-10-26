class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> index_map;
        
        for(int i=0 ; i<nums.size() ; i++){
            //if key is present
            if(index_map.find(nums[i]) != index_map.end()){
                // index_map is storing index to each num
                if(i - index_map[nums[i]] <= k){
                    return true;
                }
            }
             // Always update the index of the current number (even if key is present)
            index_map[nums[i]] = i;
        }
        return false;
    }
};