class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end()); //after sorting, small values are in front
        
        return nums[nums.size() - k];
    }
};