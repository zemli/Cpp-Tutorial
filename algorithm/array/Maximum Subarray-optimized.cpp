class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i, j;
        int max = INT_MIN;
        
        for(i = 0; i < nums.size(); i++){
            if(nums.at(i) >= 0) {
                for(j = 0; j <= i; j++){
                    if(nums.at(j) >= 0) {
                        int sum = findSum(nums, j, i);
                        if(sum > max){
                            max = sum;
                        }
                    }
                }
            }
        }
        max = max > *max_element(nums.begin(), nums.end())?max:*max_element(nums.begin(), nums.end());
        return max;
    }
    
    int findSum(vector<int>& nums, int begin, int end) {
        int sum = 0;
        while(begin <= end) {
            sum += nums.at(begin);
            begin++;
        }
        return sum;
    }
};