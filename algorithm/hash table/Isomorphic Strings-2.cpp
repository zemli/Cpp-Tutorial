class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, int> map1;
        unordered_map<char, int> map2;
        char ch1, ch2;
        for(int i=0; i<s.length(); i++) {
            ch1 = s[i]; //it actually doesn't speed up the algorithm
            ch2 = t[i];
            if(map1[ch1] == 0) map1[ch1] = i+1; //to eliminate interference of the first position 0 and null, store i+1 instead of i
            else map1[ch1] += i+1;
    
            if(map2[ch2] == 0) map2[ch2] = i+1;
            else map2[ch2] += i+1;

            if(map1[ch1] != map2[ch2]) return false;
        }
        return true;
        
    }
};