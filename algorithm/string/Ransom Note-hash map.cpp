class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int l1 = ransomNote.length(), l2 = magazine.length();
        if(l1 > l2) return false;
        
        unordered_map<char, int> m;
        for(char c:magazine)
            m[c]++;
        for(char c:ransomNote)
            if(m[c]-- < 1) return false;
        return true;
    }
};