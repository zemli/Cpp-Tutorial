class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k)
    {
       unordered_set<int> s;
       
       if (k <= 0) return false;
       if (k >= nums.size()) k = nums.size() - 1;
       
       for (int i = 0; i < nums.size(); i++)
       {
           if (i > k) s.erase(nums[i - k - 1]);  //set contains elements from nums[i - k] to nums[i - 1] //k elements in the set
           if (s.find(nums[i]) != s.end()) return true; //find if nums[i] is in set
           s.insert(nums[i]); //insert the current element in set
       }
       
       return false;
    }
};