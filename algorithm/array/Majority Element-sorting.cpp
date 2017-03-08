class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority;
        sort(nums.begin(), nums.end());
        majority = nums[nums.size()/2];
        
        return majority;
    }
};