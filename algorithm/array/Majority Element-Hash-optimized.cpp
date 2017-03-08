class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> count;
        int majority;
        for(int i=0; i<nums.size(); i++){
            if(++count[nums[i]] > nums.size()/2){
                majority = nums[i];
                break;
            }
        }
        return majority;
    }
};