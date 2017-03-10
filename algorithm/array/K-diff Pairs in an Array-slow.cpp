class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n = nums.size();
        if(n<1 || k<0) return 0;
        int count = 0;
        int newNum = 1;
        sort(nums.begin(), nums.end());
        vector<int> sorted;
        sorted.push_back(nums[0]);
        for(int i=1,j=0; i<n; i++){
            if(nums[i] != sorted[j]){
                sorted.push_back(nums[i]);
                j++;
                newNum=1;
            } else if(k==0&&newNum) {
                count++;
                newNum=0;
            }
        }
        if(k!=0){
            n = sorted.size();
            for(int i=0; i<n-1; i++) {
                for(int j=i+1; j<n; j++) {
                    if(abs(sorted[i] - sorted[j]) == k) {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};