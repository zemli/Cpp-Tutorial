class Solution {
public:
    string reverseWords(string s) {
        int begin, end, idx=0;
        for(begin = 0; begin < s.length() && s[begin] == ' '; begin++);
        end = begin + 1;
        
        while(end < s.length()){
            if(s[end] == ' ' || end == s.length()-1){
                if(end != s.length()-1) end--;
                reverseString(s, begin, end);
                for(int i=0; i<=end-begin; i++){
                    s[idx++] = s[begin+i];
                }
                s[idx++] = ' ';
                for(begin = end + 2; begin < s.length() && s[begin] == ' '; begin++);
                end = begin;
            }
            else end++;
        }
        
        idx = idx>0?idx-1:0;
        return s.substr(0, idx);
    }
private:
    void reverseString(string &s, int begin, int end){
        for(int i=0; i<(end-begin)/2 + 1; i++){
            swap(s[begin+i], s[end-i]);
        }
    }
};