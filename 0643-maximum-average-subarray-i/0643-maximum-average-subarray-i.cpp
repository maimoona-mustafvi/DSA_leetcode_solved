class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        double sum = 0;
        double maximum = INT_MIN;
        while(j<nums.size()){
               sum = sum + nums[j];
            if(j-i+1 < k){
                j++;
            }
            else if(j-i+1 == k){
                double currentAvg = sum / k;  
                maximum = max(maximum, currentAvg);
                sum -= nums[i];
                i++;
                j++;
            } 
        }
        return maximum;
        
    }
};