class Solution {
public:
    string addBinary(string a, string b) {
        int n = a.size(), m = b.size();
        string sum;
        int carry = 0;
        
        int i = n - 1, j = m - 1;
        while (i >= 0 || j >= 0 || carry > 0){ // it has || carry > 0, so don't need to add carry in the end
            if (i >= 0) {
                carry += a[i] - '0'; // char to int
                i--;
            }
            if (j >= 0) {
                carry += b[j] - '0'; // char to int
                j--;
            }
            sum += (carry % 2) + '0'; // int to char
            carry /= 2;
        }
        reverse(sum.begin(), sum.end());
        sum = '0' + sum; //in case of two null input string 
        size_t idx=0;
        while(sum[idx] == '0' && idx < sum.length()-1) idx++;
        sum = sum.substr(idx);
        return sum;
    }
};