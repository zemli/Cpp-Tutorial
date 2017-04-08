class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int end;
        int space = n;
        while(space){
            end = space;
            space = s.find_last_of(' ', end-1);
            if(space == string::npos) return end;
            else if(end - space > 1) return end - space - 1;
        }
        return 0;
        
    }
};
