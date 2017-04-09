class Solution {
public:
    int countSegments(string s) {
        if(s.length() < 1) return 0;
        int count = 0;
        bool hasSpace = false;
        for(char c:s){
            if(c == ' ') hasSpace = true;
            else if(hasSpace){
                    count++;
                    hasSpace = false;
            }
        }
        if(s[0] != ' ') return count+1;
        else return count;
    }
};