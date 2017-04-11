class Solution {  //consider extra space between words. keep extra space in the answer
public:
    string reverseWords(string s) {
        int begin, end;
        for(begin = 0; begin < s.length() && s[begin] == ' '; begin++);
        end = begin + 1;
        
        while(begin < s.length() && end + 1 < s.length()){
            if(s[end] != ' ' && s[end+1] == ' '){
                for(int i=0; i<(end-begin)/2 + 1; i++){
                    swap(s[begin+i], s[end-i]);
                }
                for(begin = end + 2; begin < s.length() && s[begin] == ' '; begin++);
                end = begin + 1;
            }
            else end++;
        }
        
        for(int i=0; i<(end-begin)/2 + 1; i++){ //when last char is not space
            swap(s[begin+i], s[end-i]);
        }
        
        return s;
    }
};