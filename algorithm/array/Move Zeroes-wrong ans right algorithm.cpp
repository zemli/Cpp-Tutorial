class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i=0, j=n-1;
        while(i<j){
            if(nums[i] == 0){
                while(nums[j] == 0 && i<j) j--;
                nums[i] = nums[j];
                nums[j] = 0;
                //j--;
            }
            i++;
        }
        int boundary = i<j?i:j;
        sort(nums.begin(), nums.begin()+(boundary>0?boundary:0));
    }
};