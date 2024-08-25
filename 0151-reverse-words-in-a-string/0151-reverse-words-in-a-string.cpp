class Solution {
public:
    string reverseWords(string s) {
        int string_size = s.size();
        int i =0;
        vector<string> v,v1;
        string reversed = "";
        string temp ="";
        
        while(i<string_size){
            //if space comes and word is not the last word of given string, means end of single word 
            if(s[i] == ' ' && temp.size()>0){
                v.push_back(temp);
                temp.clear();
            }
            else if(s[i] != ' '){
                temp += s[i];
            }
            i++;
        }
        if(temp.size() > 0){
            v.push_back(temp);   // if still there are any words left in given string
        }
        
        //reverse given words in v vector and then push them in v1
        for(int i=v.size()-1 ; i>=0 ; i--){
            v1.push_back(v[i]);
        }
        
        //building the reversed string 
        int j=0;
        while(j<v1.size()){
            reversed += v1[j];
            //space is added after each word except last word
            if(j < v1.size()-1){
                reversed +=" ";
            }
            j++;
        }
        
        return reversed;
    }
};