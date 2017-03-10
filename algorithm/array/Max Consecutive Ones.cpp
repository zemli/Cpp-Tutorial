class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int counts = 0;
        int max = 0;
        for(int i=0; i<n; i++) {
            if(nums[i] == 1) counts++;
            else {
                max = max>counts?max:counts;
                counts = 0;
            }
        }
        max = max>counts?max:counts;
        return max;
    }
};
