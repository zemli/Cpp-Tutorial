class Solution { //can be seen as conversion from decimal number to 26-number
public:
    string convertToTitle(int n) {
        string result;
        if(n <= 0) return result;

        int remainer = n;
        while(remainer > 26){
            char adder = remainer%26;
            remainer /= 26;
            if(adder == 0){ //for 26 -> Z
                adder=26;
                remainer--;//26^m+..+26/6 will generate 1 at last
            } 
            result.push_back('@'+adder);
            
        }
        
        result.push_back('A'+remainer-1);
        reverse(result.begin(), result.end());
        
        return result;
    }
};
