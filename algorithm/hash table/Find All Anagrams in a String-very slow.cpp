class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        int n = s.length();
        int l = p.length();
        unordered_map<char, int> mymap;
        
        for(auto ch:p){
            mymap[ch]++;
        }
        unordered_map<char, int> mapCopy(mymap);
        
        for(int i=0; i<n-l+1; i++){
            if(mymap.count(s[i])){
                unordered_map<char, int> mapCopy(mymap);
                for(int j=0; j<l; j++){
                    if(mapCopy[s[i+j]]-- <= 0) break;
                    if(j == l-1) res.push_back(i);
                }
            }
        }
        
        return res;
    }
};