class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        if(n < 1) return vector<int>{};
        int n1,n2,count1=0,count2=0;
        int appear1=0; int appear2=0;
        for(int i=0; i<n; i++){
            if(count1 < 1 && nums[i] != n2){ //encounter bug for input [1,2,2,3,2,1,1,3], when no (nums[i] != n)
            //after [1,2,2,3] count1==0 but count2==1 n2==2, if no (nums[i] != n), enter this if-statment and count1=1, n1=2. after this loop, n1==1,n2==3, both count==1
                n1 = nums[i]; count1 = 1; continue;
            } else if(n1 == nums[i]) {
                count1++; continue;
            } else if(count2 < 1){
                n2 = nums[i]; count2 = 1; continue;
            } else if(n2 == nums[i]) {
                count2++; continue;
            } else {
                count1--;count2--;
            }
        }
        
        for(int i=0; i<n; i++) {
            if(nums[i] == n1) appear1++;
            if(nums[i] == n2) appear2++;
        }
        vector<int> res;
        if(appear1>n/3) res.push_back(n1);
        if(appear2>n/3) res.push_back(n2);
        return res;
    }
};