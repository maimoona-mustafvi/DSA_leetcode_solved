class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()){
            return "";
        }
        
        string prefix = strs[0];
        
        for(int i=0 ; i<strs.size() ; i++){
            while(strs[i].find(prefix)!=0){
                //shorten prefix 
                prefix = prefix.substr(0,prefix.size()-1);
                
                //if prefix gets empty
                if(prefix.empty()){
                    return "";
                }
            }
        }
        return prefix;
    }
};