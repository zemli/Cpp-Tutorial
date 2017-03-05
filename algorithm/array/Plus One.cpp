class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits.size() == 0) {
            digits.insert(digits.begin(), 1);
            return digits;
        }
        
        int i=digits.size()-1,carry = 0;
        int temp = digits[i]+1;
        carry = temp/10;
        digits[i] = temp%10;
        if(digits.size() >= 2){
            for(i=digits.size()-2; i>=0; i--){
                temp = digits[i] + carry;
                carry = temp/10;
                digits[i] = temp%10;
            }
        }
        if(carry > 0){
            digits.insert(digits.begin(), carry);
        }
        
        return digits;
    }
};