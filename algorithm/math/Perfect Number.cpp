class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num < 2) return false;
        int root = sqrt(num);
        int sum = 1;
        for(int i=2; i<=root; i++){ //use squre root is more efficient
            if(num%i == 0){
                sum += i + num/i; // add both divisors to sum
            }
        }
        if(sum == num) return true;
        else return false;
    }
};