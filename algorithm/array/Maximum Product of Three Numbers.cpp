class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = nums.size()-1;
        int res1 = nums[i-2]*nums[i-1]*nums[i];
        int res2 = nums[0]*nums[1]*nums[i];//just in case of two large negative numbers
        int max = (res1>res2)?res1:res2;
        return max;
    }
};
