
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, int> map1;
        unordered_map<char, int> map2;
        
        for(int i=0; i<s.length(); i++) {
            if(map1[s[i]] == 0) map1[s[i]] = i;
            else map1[s[i]] += i;
        }
        for(int i=0; i<t.length(); i++) {
            if(map2[t[i]] == 0) map2[t[i]] = i;
            else map2[t[i]] += i;
        }
        
        for(int i=0; i<s.length(); i++) {
            if(map1[s[i]] != map2[t[i]]) return false;
        }
        return true;
        
    }
};