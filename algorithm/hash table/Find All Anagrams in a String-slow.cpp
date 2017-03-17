class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        int n = s.length();
        int l = p.length();
        unsigned int mymap[256] = {}, mapCopy[256] = {}; //don't forget initial with 0
        
        for(auto ch:p){
            mymap[ch]++;
        }
        
        for(int i=0; i<n-l+1; i++){
            if(mymap[s[i]] > 0){
                memcpy(mapCopy, mymap, sizeof(mymap));
                for(int j=0; j<l; j++){
                    if(mapCopy[s[i+j]]-- <= 0) break;
                    if(j == l-1) res.push_back(i);
                }
            }
        }
        
        return res;
    }
};