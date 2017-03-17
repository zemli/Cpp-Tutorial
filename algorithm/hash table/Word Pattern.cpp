class Solution {
public:
    bool wordPattern(string pattern, string str) {
        istringstream instream(str); //wise use of istringstream
        string sub;
        vector<string> vs;
        while(instream >> sub) vs.push_back(sub); //seperate the str by space
        
        unordered_map<string, char> s2c;
        unordered_map<char, string> c2s;
        int n = vs.size();
        if (pattern.size() != n) return false;
        for(int i=0; i<n; i++) {
            if(s2c[vs[i]] == 0 && c2s[pattern[i]] == "") { //operator[] performs an insertion if such key does not already exist. //at() throw an exception if key...
                s2c[vs[i]] = pattern[i]; 
                c2s[pattern[i]] = vs[i]; 
                continue;
            }
            if(s2c[vs[i]] != pattern[i]) return false;
        }
        return true;
    }
};