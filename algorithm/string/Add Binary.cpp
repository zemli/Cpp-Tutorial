class Solution {
public:
    string addBinary(string a, string b) {
        //delete the 0s before the first 1. if it is 00000, leave only the last 0
        size_t i=0;
        while(a[i] == '0' && i < a.length()-1) i++;
        a = a.substr(i);
        i=0;
        while(b[i] == '0' && i < b.length()-1) i++;
        b = b.substr(i);
        //add 0s to the short string, so that two strings have the same length
        int carry = 0;
        int diff = a.length() - b.length();
        string result;
        if(diff>0) {
            for(int i=0; i<diff; i++){
                b.insert(0, "0");
            }
        }
        else {
            for(int i=0; i<-diff; i++){
                a.insert(0, "0");
            }
        }
        //conduct calculation
        for(int i = a.length() - 1; i >= 0; i--){
            if(a[i] != '0' || b[i] != '0' || carry != 0) {
                if(a[i] != '0' && b[i] != '0') {  //1+1
                    result.insert(0, to_string(carry));
                    carry = 1;
                } else if(a[i] != '0' || b[i] != '0') { //1+0
                    result.insert(0, to_string(!carry));
                    carry = carry;
                } else { //0+0
                    result.insert(0, to_string(1));
                    carry = 0;
                }
            }
            else result.insert(0, to_string(0)); //0+0+0
        }
        //add a 1 if there is a carry
        if(carry) {
            result.insert(0, "1");
        }
        
        return result;
    }
};