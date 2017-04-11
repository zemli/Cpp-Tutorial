class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        if(s.length() < 2) return false;
        int length = 0;
        bool moveOn = false;
        do{
            length = s.find_first_of(s[length], length+1);
            if(length > s.length()/2 || length == string::npos) return false;// for "aba" 
        }
        while(s.length() % length != 0);//for ""aabaaba"", "aba"

        for(int i=0; i<length; i++){
            int n;
            for(n = 1; i+n*length < s.length(); n++){
                if(s[i] != s[i+n*length]) { //the pattern is not match the whole string
                    moveOn = true; 
                    break;
                }
            }
            
            if(moveOn == true) { //get a new length(pattern), and reset i for the first for-loop
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