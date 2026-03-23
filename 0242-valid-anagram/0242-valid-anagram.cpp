class Solution {
public:
    bool isAnagram(string s, string t) {
        int count[26] = {0};

        if(s.length() != t.length()){
            return false;
        }

        for(int i=0 ; i<s.length() ; i++){
            count[(int)s[i] - (int)'a']++;
            count[(int)t[i] - (int)'a']--;
        }  

        for(int j=0 ; j<26 ; j++){
            if(count[j] != 0){
                return false;
            }
        }
        return true;
    }
};