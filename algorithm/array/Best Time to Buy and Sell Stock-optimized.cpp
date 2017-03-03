class Solution {
public:
    int maxProfit(vector<int> &prices) { //has the same performance with DP solution
        if(prices.size() < 2) return 0;
        int max = 0;
        int minPrice = prices[0];
        
        for(int i = 1; i < prices.size(); i++){
            if(prices[i] > prices[i-1]){
                max = (max > prices[i] - minPrice)? max:(prices[i] - minPrice);
            } else {
                minPrice = (minPrice < prices[i])?minPrice:prices[i];
            }
        }
        return max;
    }
};