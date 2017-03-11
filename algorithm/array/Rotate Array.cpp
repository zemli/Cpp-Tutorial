class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(n < 2 || k ==0 || k==n) return;
        k = k % n;
        rotate(nums, k, 0, n-1);
    }
    
private:
    void swap(int& a, int& b){
        int temp = a;
        a = b;
        b = temp;
    }
    void rotate(vector<int>& nums, int k, int i, int j){ //the subarray nums[i] to nums[j]
        int size = j-i+1;
        if(2*k == size){
            for(int p=i; p<k+i; p++){
                int q=p+k;
                swap(nums[p], nums[q]);
            }
            return;
        } else if(2*k < size){
            for(int p=i; p<k+i; p++){
                int q=size-k+p;
                swap(nums[p], nums[q]);
            }
            rotate(nums, k, k+i, j);
        } else { //if(2*k > size)
            int t = size-k;
            for(int p=i; p<i+t; p++){
                int q=p+t;
                swap(nums[p], nums[q]);
            }
            k = size-t-t; //change k, because actually original k is the size of the subarray 
            rotate(nums, k, i+t, j);
        }
    }
};