class Solution {
public:
    bool isHappy(int n) {
        int slow = n, fast = sumSquares(n);
        do{
            slow = sumSquares(slow);
            fast = sumSquares(sumSquares(fast));
            if(fast == 1) return true;
        }
        while(slow != fast); //Floyd Cycle detection algorithm to detect a cycle/loop
        return false;
    }
private:
    int sumSquares(int n) {
        int sum = 0;
        while(n > 0) {
                sum += (n%10)*(n%10);
                n = n/10;
        }
        return sum;
    }
};