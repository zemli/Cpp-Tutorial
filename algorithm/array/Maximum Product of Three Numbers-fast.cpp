class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int max1=INT_MIN, max2=INT_MIN, max3=INT_MIN;
        int min1=INT_MAX, min2=INT_MAX;
        for(auto e:nums){
            if(e>max3){
                if(e>max1){
                    max3=max2;max2=max1;max1=e;
                }
                else if(e>max2){
                    max3=max2;max2=e;
                }
                else max3=e;
            }
            if(e<min2){
                if(e<min1){
                    min2=min1;min1=e;
                }
                else min2=e;
            }
        }
        int res1 = max1*max2*max3, res2;
        if(min1*min2 > 0)
        res2 = min1*min2*max1;
        else res2 = INT_MIN;
        int max = (res1>res2)?res1:res2;
        return max;
    }
};