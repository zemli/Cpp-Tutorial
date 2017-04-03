class Solution {
public:
    string countAndSay(int n) {
        if (n < 1) return "1";
        string res = "1";
        while (--n) {
            string cur = "";
            for (int i = 0; i < res.size(); i++) {
                int count = 1;
                 while ((i + 1 < res.size()) && (res[i] == res[i + 1])){ //compare [i] and [i+1]
                    count++;    
                    i++;
                }
                cur += to_string(count) + res[i]; //std::to_string in c++11 convert int to string. string can do + operate
            }
            res = cur;
        }
        return res;
    }
};