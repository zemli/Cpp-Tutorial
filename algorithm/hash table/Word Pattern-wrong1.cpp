class Solution {
public:
    bool wordPattern(string pattern, string str) {
        string sub;
        unordered_map<char, string> mymap;
        int start=0, end, count=0;
        for(auto ch:pattern){
            end = endIndex(str, start);
            sub = str.substr(start, end);
            start = end + 2;
            
            if(mymap.count(ch) > 0){ //maybe cannot use count() here
                string pat = mymap[ch];
                if(pat.compare(sub) != 0) return false;
            } else {
                mymap[ch] = sub;
            }
            count++;
        }
        return true;
        
    }
    int endIndex(string str, int i){
        int end = str.size();
        if(str[i] == ' ' && i < end) i++;
        while(str[i] != ' ' && i < end){
            i++;
        }
        return --i;
    }
};