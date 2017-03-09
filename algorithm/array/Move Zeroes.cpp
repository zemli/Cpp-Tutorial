class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i=0, j=0;
        while(i<n-1){
            if(nums[i] == 0){ 
                j = i+1; //everytime find a 0, find a non-0 starting from the next element
                while(nums[j] == 0 && j<n-1) j++;
                nums[i] = nums[j];
                nums[j] = 0;
            }
            i++;
        }
    }
};