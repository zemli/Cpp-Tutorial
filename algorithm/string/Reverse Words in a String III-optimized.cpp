class Solution {
public:
    string reverseWords(string s) {
        int idx = 0;
        for (int i = 0; i < s.length(); i++) { // can change to i <= s.length(), so no need another reverse() out of for-loop
            if(s[i] == ' '){ // can change to if(i == s.length() || s[i] == ' '). it excutes the first statement firstly, would be out of range by excuting s[s.length()]
                reverse(s.begin() + idx, s.begin() + i); // reverse() function
                idx = i + 1;
            }
        }
        reverse(s.begin() + idx, s.begin() + s.length()); //for the last word
        return s;
    }
};