class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority;
        int n = nums.size();
        int counts = 0;
        for(int i=0; i<n; i++) {
            if(counts<1) {
                majority = nums[i];
                counts = 1;
            } else {
                counts += (nums[i] == majority)?1:-1;
            }
        }
        return majority;
    }
};