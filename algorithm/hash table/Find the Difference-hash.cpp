class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> mymap;
        for(auto ch:s){
            mymap[ch]++;
        }
        for(auto ch:t){
            if(mymap.count(ch) > 0)
                if(mymap[ch]>0) mymap[ch]--;
                else return ch;
            else
                return ch;
        }
    }
};