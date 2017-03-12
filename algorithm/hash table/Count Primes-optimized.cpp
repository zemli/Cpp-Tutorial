class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
        vector<bool> notprime(n, false);
        for(int i=2; i<sqrt(n); i++){ // i < square of n. the rest is covered in for loop of j
            if(notprime[i] == false){
                for(int j=2; i*j < n; j++){
                    notprime[i*j] = true; //mark the number isn't prime
                }
            }
        }
        notprime[0] = notprime[1] = true; //should mark 0 and 1 is not prime
        for(auto num:notprime) if(num == false) count++;
        return count;
    }
};