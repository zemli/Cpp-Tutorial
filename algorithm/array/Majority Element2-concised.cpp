class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        if(n < 1) return vector<int>{};
        int n1,n2,count1=0,count2=0;
        int appear1=0; int appear2=0;
        for(int i=0; i<n; i++){ //continue can be used to replace else if //if else statement would enter else part only when if statement is false, otherwise wouldn't enter else part
            if(n1 == nums[i]) {
                count1++;continue;
            }
            if(n2 == nums[i]) {
                count2++;continue;
            }
            if(count1 < 1){
                n1 = nums[i]; count1 = 1; continue;
            }
            if(count2 < 1){
                n2 = nums[i]; count2 = 1; continue;
            }
            count1--;count2--;
            
        }
        
        for(int i=0; i<n; i++) {
            if(nums[i] == n1) appear1++;
            else if(nums[i] == n2) appear2++;
        }
        vector<int> res;
        if(appear1>n/3) res.push_back(n1);
        if(appear2>n/3) res.push_back(n2);
        return res;
    }
};