class Solution {
public:
    int titleToNumber(string s) {
        int res=0;

        for(int i=0; i<s.length(); i++){
            char ch = s[i] - '@';
            res = res*26 + (int)ch;
        }
        return res;
    }
};