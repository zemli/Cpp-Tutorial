class Solution {
public:
    string reverseVowels(string s) {
        set<char> vowels = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};
        int i=0, j=s.length()-1;
        while(i < j) {
            while(vowels.find(s[i]) == vowels.end() && i < j) i++;
            while(vowels.find(s[j]) == vowels.end() && i < j) j--;
            if(i < j) swap(s[i++], s[j--]);
        }
        return s;
    }
};