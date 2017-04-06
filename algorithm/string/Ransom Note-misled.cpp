class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) { 
        int l1 = ransomNote.length(), l2 = magazine.length(); //in this solution, ransomNote in magazine must be consecutive 
        if(l1 == 0) return true;
        if(l1 > l2) return false;
        int count=0;
        
        for(int i=0; i<l2; i++){
            if(magazine[i] == ransomNote[0]){
                count++;
                for(int j=1; j<l1; j++){
                    if(ransomNote[j] != magazine[i+j])
                        break;
                    else count++;
                }
                if(count == l1) return true;
                else count = 0;
            }
        }
        return false;
    }
};