class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int pin0=0, i=0, j=0;
        while(i<n-1 && j<=n-1){
            if(nums[i] == 0){
                j = max(j,i+1); //if everytime to find a non-0 from i+1, would spend duplicate time. eg. 000100001
                while(nums[j] == 0 && j<n-1) j++;
                nums[i] = nums[j];
                nums[j] = 0;
                j += 1;  // we can save j's location to avoid searching consecutive 0s between i and j
            }
            i++;
        }
    }
};