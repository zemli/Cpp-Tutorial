class Solution { //cannot work for ((]], season unknown
public:
    bool isValid(string s) {
        int n = s.length();
        if(n%2 == 1) return false;

        char ch;
        vector<char> vec;
        
        for(int i=0; i<n; i++){
            ch = s[i];
            if(ch == '(' || ch == '[' || ch == '{'){
                vec.push_back(ch);
            }
            if(ch == ')' || ch == ']' || ch =='}'){
                if(!vec.empty()){
                    char a = vec.back();
                    if(a - ch > 2) return false;
                    vec.pop_back();
                } else return false;
            }
        }
        if(vec.empty()) return true;
        else return false;
    }
};