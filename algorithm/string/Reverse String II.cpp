class Solution {
public:
    string reverseStr(string s, int k) {
        int n=s.length();
        int start = 0, i = 0;
        while(start<n) {
            int end = start + k - 1;
            if(end >= n) end = n-1;
            while(start < end)
                swap(s[start++], s[end--]);
            start = 2*k*++i;
        }
        return s;
    }
};