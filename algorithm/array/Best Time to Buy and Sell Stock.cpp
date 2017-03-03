class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i, j = prices.size()-1;
        int max = 0;
        for(j; j > 0; j--){
            for(i=j-1; i >= 0; i--){
                int diff = prices.at(j)-prices.at(i);
                max = max>diff? max:diff;
            }
        }
        return max;
    }
};