class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int begin = 0, end = 0;
        int max_begin = 0, max_end = 0;
        int max = INT_MIN;
        
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i; j < nums.size(); j++) {
                int sum = findSum(nums, i, j);
                if( sum > max ){
                    max_begin = i;
                    max_end = j;
                    max = sum;
                }
            }
        }
        
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