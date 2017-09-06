class Solution {
public:
    int firstUniqChar(string s) {
        int minpos = INT_MAX;
        bool findit = false;
        unordered_map<char, int> map;
        for(int i=0; i<s.size(); i++){
            map[s[i]]++;
        }
        for(auto it:map){
            if(it.second==1){
                findit = true;
                minpos=min((int)s.find_first_of(it.first), minpos);
            }
        }
        if(findit) return minpos;
        else return -1;
    }
};