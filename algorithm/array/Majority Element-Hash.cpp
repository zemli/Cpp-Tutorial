class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size() < 2) return nums[0];
        unordered_map<int, int> count;
        unordered_map<int, int>::const_iterator got;
        int majority;
        for(int i=0; i<nums.size(); i++){
            got = count.find(nums[i]);
            if(got == count.end()){
                count.emplace(nums[i], 1);
            } else {
                if(++count[nums[i]] > nums.size()/2){
                    majority = nums[i];
                    break;
                }
            }
        }
        
        return majority;
    }
};