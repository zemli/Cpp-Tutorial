class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> queue;
        //can initial it with values: priority_queue<int> queue(nums.begin(), nums.end());
        for(int n:nums)
            queue.push(n);
        for(int i=0; i<k-1; i++)
            queue.pop(); //pop from top
        return queue.top(); //top is the highest value
    }
};