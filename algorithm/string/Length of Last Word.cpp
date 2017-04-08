class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0, last=0;

        for(char c:s){
            if(c == ' ') {
            	last = length>0?length:last; 
            	length = 0; 
            	continue;
            }
            else length++;
        }
        return length==0?last:length;
    }
};