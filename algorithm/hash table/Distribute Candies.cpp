class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        
        int i=0, size=candies.size();
        unordered_map<int, bool> hash;
        while(i<candies.size()){
            if(!hash[candies[i]]) hash[candies[i]] = true;
            i++;
        }
        return min((int)hash.size(), size/2);
    }
};