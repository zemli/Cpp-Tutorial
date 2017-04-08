class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        if(n == 0) return 0;
        int space2 = n;
        int space1 = s.find_last_of(' ', space2-1);
        while(space2 - space1 < 2 && space1 && space2){
            space2 = s.find_last_of(' ', space1-1);
            if(space2 == string::npos) return space1;
            space1 = s.find_last_of(' ', space2-1);
            if(space1 == string::npos) return space2;
        }
        
        return space2 - space1 - 1;
    }
};