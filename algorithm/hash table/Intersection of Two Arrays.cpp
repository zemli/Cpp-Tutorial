class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> myset;
        unordered_set<int>::iterator get;
        vector<int> res;
        for(auto n:nums1) {
            myset.insert(n); //unordered_set dosen't have duplicates. this function return a iterator, if the key is duplicated the iterator.second is null
        }
        for(auto n:nums2) {
            get = myset.find(n);
            if(get != myset.end()) {
                myset.erase(n); //avoid duplicated in nums2
                res.push_back(n);
            }
        }
        return res;
    }
};