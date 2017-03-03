class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long max1 = LONG_MIN, max2 = LONG_MIN, max3 = LONG_MIN; //LONG_MIN is less than INT_MIN, eliminate interference like [1,2,-2147483648]
        for(int num : nums){
            if(num == max1 || num == max2 || num == max3){ //if use INT_MIN, -2147483648 will not be processed
                continue;
            }
            if(num > max1){
                max3=max2;
                max2=max1;
                max1=num;
            } else if(num > max2){
                max3=max2;
                max2=num;
            } else if(num > max3){
                max3=num;
            }
        }
        
        return max3 == LONG_MIN ? max1 : max3;
    }
};