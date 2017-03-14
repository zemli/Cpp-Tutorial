class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map<int, int> mymap;
        unordered_map<int, int>::iterator get;
        int val;
        for(auto n:nums1){
            get = mymap.find(n);
            if(get == mymap.end()){
                mymap.emplace(n, 1);
            } else {
                val = get->second + 1;
                mymap.erase(n);
                mymap.emplace(n, val);
            }
        }
        
        for(auto n:nums2){
            get = mymap.find(n);
            if(get != mymap.end()) {
                res.push_back(n);
                val = get->second - 1;
                if(val == 0) mymap.erase(n);
                else {
                    mymap.erase(n);
                    mymap.emplace(n, val);
                }
            }
        }
        
        return res;
    }
};