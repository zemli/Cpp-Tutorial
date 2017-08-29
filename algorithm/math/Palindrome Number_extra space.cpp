class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        int i=0, j=str.length()-1;
        //if(str[i]=='-') i++;
        while(i < j){
            if(str[i++] != str[j--]) return false;
        }
        return true;
    }
};