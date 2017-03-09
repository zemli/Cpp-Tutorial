class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        int i=0;
        while (i < n) {
            if (nums[i] != nums[nums[i]-1]) swap(nums[i], nums[nums[i]-1]); //swap the element to where it should be// if two elements is equal, it means ethier i==nums[i]-1 or it is duplicate
            else i++;
        }
        for(int i=0; i<n; i++){
            if(nums[i] != i+1) res.push_back(nums[i]);
        }
        return res;
    }
};