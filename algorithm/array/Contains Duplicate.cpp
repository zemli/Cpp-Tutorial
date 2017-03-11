class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> map;
        for(auto n:nums){
            if(map[n]>0){
                return true;
            } else map[n]++;
        }
        return false;
    }
};