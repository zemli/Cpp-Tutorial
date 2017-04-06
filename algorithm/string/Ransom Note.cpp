class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int l1 = ransomNote.length(), l2 = magazine.length();
        if(l1 > l2) return false;
        
        int i=0;
        while(i<l1){
            size_t found = magazine.find(ransomNote[i]);
            if(found == string::npos) return false;
            else {
                magazine[found] = ' '; //change the used char in magazine to ' '
                i++;                             //can also use string::erase(found, 1) to erase one char in string, reducing its length
            }
        }
        return true;
    }
};