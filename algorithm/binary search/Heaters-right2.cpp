class Solution {
public:
  int findRadius(vector<int>& houses, vector<int>& heaters) { //Time: O(NlogN)
    sort(heaters.begin(), heaters.end());
    int ans = 0;
    for (int h : houses) {
      // search for the closest heater whose position is at least the current house's position
      vector<int>::iterator i = lower_bound(heaters.begin(), heaters.end(), h);
      int d = INT_MAX;
      if (i != heaters.end()) d = min(d, *i - h);
      if (i != heaters.begin()) d = min(d, h - *(i - 1));
      ans = max(ans, d);
    }
    return ans;
  }
};