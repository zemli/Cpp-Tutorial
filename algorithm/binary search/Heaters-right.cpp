class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        if (heaters.size() == 0) {
            return 0;
        }
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());
        int radius = 0;
        int index = 0;
        for (int i = 0; i < houses.size(); i++) {
            while (index + 1 < heaters.size() && (abs(heaters[index+1] - houses[i]) <= abs(heaters[index] - houses[i]))) {
                index++;
            }
            radius = max(radius, abs(heaters[index] - houses[i]));
        }
        return radius;
    }
};