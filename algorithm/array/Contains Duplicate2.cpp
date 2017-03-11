class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        int n = nums.size();
        unordered_map<int,int>::iterator got;
        for(int i=0; i<n; i++) {
            got = map.find(nums[i]);
            if(got == map.end()){
                map[nums[i]] = i;
            } else {
                if(i - map[nums[i]] <= k) return true;
                else map[nums[i]] = i;
            }
        }
        return false;
    }
};