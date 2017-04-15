class Solution {
public:
    int arrangeCoins(int n) {
        if(n < 2) return n;
        else if(n < 4) return n-1;
        
        int row = n/2;
        while(row > 1){
            long sum = ((long)row*row + row) / 2; //long has 32 bits, long long has 64 bits
            if(n == sum) return row;
            else if(n > sum) {
                if(n - sum < row + 1) return row;
                else row = row * 2;
            }
            else {
                if(sum - n < row + 1) return row-1;
                else row = row / 2 + 1; //must have +1. so the while loop won't be infinite 
            }
        }
    }
};