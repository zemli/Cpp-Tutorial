class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i = 0;
        while (i < nums.size()-1) {
            nums[++i] ^= nums[i];
        }
        return nums[i];
    }
};