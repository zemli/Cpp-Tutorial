class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
        for(int i=2; i<n; i++){
            if(isPrime(i)) count++;
        }
        return count;
    }
private: 
    bool isPrime(int num) {
        int end = num/2;
        for(int i=2; i<=end; i++) {
            if(num%i == 0) return false;
        }
        return true;
    }
};