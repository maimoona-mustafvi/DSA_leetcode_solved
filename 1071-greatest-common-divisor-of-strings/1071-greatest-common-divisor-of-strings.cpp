class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int str1_length = str1.length();
        int str2_length = str2.length();
        
        int gcd_length = __gcd(str1_length , str2_length);
        string str;
        if(str1 + str2 == str2 + str1){
            return str1.substr(0,gcd_length);
        }
        else{
            return "";
        }
    }
};