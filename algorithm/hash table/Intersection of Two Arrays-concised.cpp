class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> myset(nums1.begin(), nums1.end()); //initial an unordered_set with the copy of nums1. no duplicates in unordered_set
        unordered_set<int>::iterator get;
        vector<int> res;

        for(auto n:nums2) {
            if(myset.count(n)) { //count() return 1 if the key is found, otherwise return 0
                myset.erase(n);
                res.push_back(n);
            }
        }
        return res;
    }
};