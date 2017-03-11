class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size,n;
        size=n=nums.size();
        k = k % n;
        if(n<2 || k<1) return;
        
        int i = k;
        for(int i=k; n>0; i++) { // the for loop excute n times
            int j=i, prev=nums[(i-k)%k];
            while(n-->0) {  //once swap a pair, n--
                swap(prev,nums[j]);
                j=(j+k)%size;  //move j to point to the next block
                if(j==i) break; //when j+k > size
            }
        }
    }
};