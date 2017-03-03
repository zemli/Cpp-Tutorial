class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int max1 = INT_MIN, max2= INT_MIN, max3= INT_MIN;
        int count = 0, hasMin = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            if(nums.at(i) == max1 || nums.at(i) == max2 || nums.at(i) == max3){
                if(nums.at(i)==INT_MIN)
                    hasMin = 1;
                continue;
            }
            if(nums.at(i) > max1){
                max3=max2;
                max2=max1;
                max1=nums.at(i);
                count++;
            } else if(nums.at(i) > max2) {
                max3=max2;
                max2=nums.at(i);
                count++;
            } else if(nums.at(i) >= max3) {
                max3=nums.at(i);
                count++;
            }
        }
        if(hasMin + count >= 3)
            return max3;
        return max1;
    }
};