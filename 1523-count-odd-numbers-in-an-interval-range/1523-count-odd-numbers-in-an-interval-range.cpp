class Solution {
public:
    int countOdds(int low, int high) {
        int half = (high - low)/2 ;
        if (low % 2 != 0 || high % 2 != 0) {
            return half + 1;
        } else {
            return half;
        }
    }
};