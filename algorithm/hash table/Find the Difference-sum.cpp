class Solution {
public:
    char findTheDifference(string s, string t) {
        int n = s.size();
        char ch=t[t.size()-1];
        for(int i=0; i<n; i++) {
            ch += t[i]; //sum all the chars in t
            ch -= s[i]; //minus chars in s, the rest one is the answer 
        }
        return ch;
    }
};