class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        int n = s.length();
        int l = p.length();
        unsigned int mymap[256] = {}, mapCopy[256] = {};
        
        for(auto ch:p){
            mymap[ch]++;
        }
        
        for(int i=0; i<n-l+1; i++){
            if(mymap[s[i]] > 0){
                memcpy(mapCopy, mymap, sizeof(mymap));
                for(int j=0; j<l; j++){
                    if(mapCopy[s[i+j]]-- <= 0) break;
                    if(j == l-1) {
                        res.push_back(i);
                        for(int k=i; k<n-l+1; k++){ //check consecutive right answer
                            if(s[k] == s[k+l]) {res.push_back(k+1); i++;}
                            else break;
                        }
                    }
                }
                
            }
        }
        
        return res;
    }
};