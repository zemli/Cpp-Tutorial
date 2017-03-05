class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for(int i = n-1; i >= 0; i--){ //use n to denote size, and for-loop and n to judge whether should enter for-loop
            if(digits[i]==9){
                digits[i]=0;
            } else {
                digits[i]++;
                return digits; //once the last digit is added one, there is no need to check other digits 
                //if there is a non-zero carry, when we find the first non-nine previous digit, we can end the loop
            }
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};