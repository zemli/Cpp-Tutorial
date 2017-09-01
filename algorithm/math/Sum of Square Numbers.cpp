class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c < 0) return false;
        int i=0, j=sqrt(c); //set max possible j is squre root of c
        while(i<=j){
            int sum = i*i + j*j;
            if(sum == c) return true;
            else if(sum < c) i++; //compare sum and c. each time change either i or j
            else if(sum > c) j--; //each time change either i or j, so that it won't miss any possile combination
        }
        
        return false;
    }
};