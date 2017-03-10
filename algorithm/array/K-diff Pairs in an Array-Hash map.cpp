class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n = nums.size();
        if(n<1 || k<0) return 0;
        unordered_map<int, int> map;
        int count = 0;
        for(auto e:nums) map[e]++;
        for(auto e:map){
            int i = e.first;
            int j = i + k;
            if(k==0) {if(e.second > 1) count++;}
            else if(map.find(j) != map.end()) count++;
        }
        return count;
    }
};