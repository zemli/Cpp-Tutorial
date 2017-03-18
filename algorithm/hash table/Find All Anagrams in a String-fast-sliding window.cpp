class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        vector<int> sv(26, 0), pv(26, 0);
        int psize = p.size(), ssize = s.size();
        
        for(int i=0; i<psize; i++){
            pv[p[i]-'a']++; //use -'a' to shrink vector size from 256 to 26
            sv[s[i]-'a']++;
        }
        
        if(sv==pv) res.push_back(0);
        
        for(int i=psize; i<ssize; i++){ //use sv as a sliding window to contain psize elements, and compare with pv
            sv[s[i]-'a']++;
            sv[s[i-psize]-'a']--;
            if(sv==pv) res.push_back(i-psize+1);
        }
        return res;
    }
};