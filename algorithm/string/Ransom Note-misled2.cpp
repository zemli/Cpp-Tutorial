class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) { //the string in magazine dosen't need to be consecutive, but the order is considered
        int l1 = ransomNote.length(), l2 = magazine.length();
        if(l1 > l2) return false;
        
        int i=0, j=0;
        while(i<l2 && j<l1)
            if(magazine[i++] == ransomNote[j]) j++;
        if(j==l1) return true;
        else return false;
    }
};