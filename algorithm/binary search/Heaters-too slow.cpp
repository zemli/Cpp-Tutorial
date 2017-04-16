class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        int maxRange = 0;
        
        for(int i=0; i < houses.size(); i++){
            int dis = INT_MAX;
            for(int j=0; j < heaters.size(); j++){
                dis = min(dis, abs(houses[i] - heaters[j]));
            } 
            maxRange = max(maxRange, dis);
        }

        return maxRange;
    }
};