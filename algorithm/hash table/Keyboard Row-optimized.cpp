class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<int>letters(256);
        
        string s1 = "asdfghjklASDFGHJKL" ; 
        string s2 = "qwertyuiopQWERTYUIOP"; 
        string s3 = "zxcvbnmZXCVBNM" ;  
        
        for(const auto ch : s1) letters[ch] = 2;
        for(const auto ch : s2) letters[ch] = 3;
        for(const auto ch : s3) letters[(ch)] = 5;
        
        vector<string> result;
        
        for(const auto w : words){
            int val = 0;
            for(const auto ch : w){
                if(!val) val = letters[ch];
                else{
                    if(letters[ch] != val){ 
                        val = -1;
                        break;
                    }
                }
            }
            if(val > 0) result.emplace_back(w);
        }
        return result;
    }
};