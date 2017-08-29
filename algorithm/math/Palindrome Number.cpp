class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int num = x;
        int y=0;
        while(x > 0){
            y = y*10 + x%10;
            x /= 10;
        }
        if(num == y) return true; //don't use x to compare
        else return false;
    }
};