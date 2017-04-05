class Solution {
public:
    string reverseVowels(string s) { 
        string vowels = "aeiouAEIOU"; //same algorithm, but use find() in string class
        int i=0, j=s.length()-1;
        while(i < j) {
            while(vowels.find(s[i]) == string::npos && i < j) i++; // string::npos is a static member constant value, means "until the end of the string".
            while(vowels.find(s[j]) == string::npos && i < j) j--;  // As a return value, it is usually used to indicate no matches.
            if(i < j) swap(s[i++], s[j--]);
        }
        return s;
    }
};