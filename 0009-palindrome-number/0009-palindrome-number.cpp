class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false ;
        }
        long temp = x;
        long reversed = 0 ;
        while(temp!=0){
            int digit = (int)(temp % 10);
            reversed = (reversed*10) + digit ;
            temp = temp / 10;
        }
        
        if(reversed == x){
            return true;
        }else{
            return false;
        }
    }
};