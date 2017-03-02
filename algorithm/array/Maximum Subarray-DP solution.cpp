#include <algorithm> 

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums.at(0);
        int subMax = nums.at(0);
        
        for(int i=1; i < nums.size(); i++) {
            subMax = max(subMax + nums.at(i), nums.at(i));
            sum = max(sum, subMax);
        }
        
        return sum;
    }
    
};