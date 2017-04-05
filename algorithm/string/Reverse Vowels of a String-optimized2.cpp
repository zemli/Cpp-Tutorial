class Solution {
public:
    string reverseVowels(string s) {
        size_t i=0, j=s.length()-1;
        while(i < j) {
            i = s.find_first_of("aeiouAEIOU", i); //it returns the first position matches "aei.." after i
            j = s.find_last_of("aeiouAEIOU", j); //it returns the last position matches "aei.." before j
            if(i < j && i != string::npos && j != string::npos) swap(s[i++], s[j--]);
        }
        return s;
    }
};