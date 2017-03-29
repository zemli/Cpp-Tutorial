class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        if(n%2 == 1) return false;
        
        vector<char> vec;
        
        for(char ch:s){
            if(ch == '(' || ch == '[' || ch == '{'){
                vec.push_back(ch);
            }
            else{
                switch(ch){
                    case ')': if(vec.empty() || vec.back() != '(') return false; vec.pop_back(); break;
                    case ']': if(vec.empty() || vec.back() != '[') return false; vec.pop_back(); break;
                    case '}': if(vec.empty() || vec.back() != '{') return false; vec.pop_back(); break;
                }
            }
        }
        if(vec.empty()) return true;
        else return false;
    }
};