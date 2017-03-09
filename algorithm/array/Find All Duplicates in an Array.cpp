class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        for(int i=0; i<n; i++) {
            int idx = abs(nums[i])-1; //treat elements in nums as clue to index. mark elements nagative, find ones are already nagetive
            if(nums[idx]>0) {
                nums[idx] = -nums[idx];
            } else {
                res.push_back(idx+1);
            }
        }
        return res;
    }
};