class Solution {
public:
int distributeCandies(vector<int>& candies) {
        bitset<200001> hash; //number range -100000---0---100000
        int count = 0, size = candies.size();
        for (int i : candies) {
            if (!hash[i+100000]) { //index starts from 0
               count++;
               hash[i+100000]=1;
            }
        }
        return min(count, size/2);
    }
};