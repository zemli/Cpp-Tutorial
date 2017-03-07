class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int val;
        vector<int> exist;
        vector<int>::iterator got;
        for(int i=0; i<nums.size(); i++){
            val = nums[i];
            got = find(exist.begin(), exist.end(), val);
            if(got == exist.end()){
                exist.push_back(val);
            } else {
                exist.erase(got);
            }
        }
        val = exist.back();
        return val;
    }
};