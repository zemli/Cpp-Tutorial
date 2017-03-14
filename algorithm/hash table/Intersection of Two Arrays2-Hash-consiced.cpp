class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map<int, int> mymap;
        for(auto n:nums1)
            mymap[n]++;
        
        for(auto n:nums2){
            if(mymap.find(n) != mymap.end() && mymap[n]>0) {
                res.push_back(n);
                mymap[n]--;
            }
        }
        
        return res;
    }
};