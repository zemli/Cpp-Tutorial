class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        if(s.length() < 2) return false;
        int length = 0;
        bool moveOn = false;
        do{
            length = s.find_first_of(s[length], length+1);
            if(length > s.length()/2 || length == string::npos) return false;//"aba" 
        }
        while(s.length() % length != 0);//for ""aabaaba""

        for(int i=0; i<length; i++){
            int n;
            for(n = 1; i+n*length < s.length(); n++){
                if(s[i] != s[i+n*length]) {
                    moveOn = true; 
                    break;
                }
            }
            
            if(moveOn == true) {
                do{
                    length = s.find_first_of(s[length], length+1);
                    if(length > s.length()/2 || length == string::npos) return false;
                }
                while(s.length() % length != 0);
                i = -1;
                moveOn = false;
            }
        }
        
        return true;
    }
};