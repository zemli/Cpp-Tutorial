class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        if(n < 1) return 0;
        int i=0, j=n-1, count=0;
        while(i<=j){
            if(nums[i] == val){
                while(nums[j] == val && i<j) j--;
                if(i<j){
                    nums[i++] = nums[j--];
                    count++;
                }
                else return count;
            } else {
                count++;
                i++;
            }
        }
        return count;
    }
};