class Solution { //works for ([]), but not for [()]. reason unknown 
                            // cannot recognize inners eg. ([{]]) is true
public:
    bool isValid(string s) {
        int n = s.length();
        if(n%2 == 1) return false;
        
        int balance = 0; // for inners inside a outer
        int main = 0; //for one outer 
        bool found = false;
        char ch;
        for(int i=0; i<n; ){
            ch = s[i];
            if(ch == '(' || ch == '[' || ch == '{'){
                main = 1;
                balance = 1;
                int j;
                for(j=i+1; j<n; j++){
                    char a = s[j];
                    if(a == '(' || a == '[' || a == '{'){ 
                        balance++;
                        if(a - ch == 0) main++;
                    }
                    else if(a == ')' || a == ']' || a =='}'){
                        balance--;
                        if(a - ch < 3) main--;
                    }
                    if(main == 0) break;
                }
                if(balance != 0 || main != 0) return false;
                i = j+1;
            } else return false;
        }
        return true;
    }
};