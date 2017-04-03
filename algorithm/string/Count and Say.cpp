class Solution {
public:
    string countAndSay(int n) {
        if(n < 2) return "1";
        string s = "1";
        for(int i=0; i<n-1; i++){
            s = once(s);
        }
        return s;
    }
private:
    string once(string s){
        stringstream ss;
        int count = 0, prev = s[0]-'0'; // int to char. campare with '0' is because in ascii code numbers start from 48('0')
        for(int i=0; i<s.length(); i++){
            int digit = s[i] - '0';
            if(digit == prev){
                count++;
            }
            else{
                ss<<count<<prev;
                count = 1;
                prev = digit;
            }
        }
        ss<<count<<prev;
        return ss.str();
    }
};