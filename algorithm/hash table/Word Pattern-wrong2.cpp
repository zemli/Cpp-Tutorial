class Solution {
public:
    bool wordPattern(string pattern, string str) {
        unordered_map<char, string> p2s;
        unordered_map<string, char> s2p;
        vector<string> vec = seperate(str); //wrong. size is incorrect. didn't seperate correctly
        string sub;
        int i=0;
        for(auto ch:pattern){
            sub = vec[i++];
            if(!p2s.count(ch)) {
                if(!s2p.count(sub)){
                    p2s[ch] = sub;
                    s2p[sub] = ch;
                } else return false;
            } else {
                if(p2s[ch] != sub) return false;
            }
        }
        return true;
    }
    vector<string> seperate(string str){
        int n = str.size();
        vector<string> vec;
        if(n==1) {vec.push_back(str); return vec;}
        for(int i=0; i<n; i++){
            int j = i+1;
            while(str[j] != ' ' && j < n-1) j++;
            if(str[j] == ' ') j--;
            vec.push_back(str.substr(i,j));
        }
        return vec;
    }
};