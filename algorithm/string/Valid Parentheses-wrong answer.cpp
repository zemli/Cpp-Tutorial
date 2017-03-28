class Solution { //return true as long as left symbol ([{ ==  right symbol }])
public:
    bool isValid(string s) {
        int n = s.length();
        if(n%2 == 1) return false;
        bool found = false;
        char ch;
        for(int i=0; i<n; i++){
            ch = s[i];
            if(ch == '(' || ch == '[' || ch == '{'){
                for(int j=i+1; j<n; j++){
                    if(abs(s[j] - ch) < 3 && abs(s[j] - ch) > 0){
                        s[j] = 0;
                        found = true;
                    }
                }
                    if(!found) return false;
                    found = false;
            }
            else if(ch == ')' || ch == ']' || ch =='}'){
                for(int j=i+1; j<n; j++){
                    if(abs(s[j] - ch) < 3 && abs(s[j] - ch) > 0){
                        s[j] = 0;
                        found = true;
                    }
                    if(!found) return false;
                    found = false;
                }
            }
        }
        return true;
    }
};