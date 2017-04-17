class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        multiset<int> mset(nums.begin(), nums.end());
        multiset<int>::iterator it = mset.end();
        //nums.end() does not point to any element, so need to minus k times
        for(int i=0; i< k; i++)
            it--;
        return *it;
    }
};