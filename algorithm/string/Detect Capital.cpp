class Solution {
public:
    bool detectCapitalUse(string word) {
        int len = word.length();
        if(len < 2) return true;
        
        bool capBegin = word[0] < 'a';
        bool isCap = word[1] < 'a';
        if(!capBegin && isCap) return false;
        
        for(int i=2; i<len; i++){
            if(isCap != word[i] < 'a') return false;
        }
        
        return true;
    }
};