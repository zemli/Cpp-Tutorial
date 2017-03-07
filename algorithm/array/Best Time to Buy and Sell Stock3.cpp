class Solution { //https://discuss.leetcode.com/topic/5934/is-it-best-solution-with-o-n-o-1/29
public:
    int maxProfit(vector<int>& prices) {
        int max1 = 0, max2 = 0;
        int lowestBuyPrice1 = INT_MAX;
        int lowestBuyPrice2 = INT_MAX;

        for (int i = 0; i < prices.size(); i++) {
        	max2 = max(max2, prices[i] - lowestBuyPrice2); //the accrued maximum profit until now
        	lowestBuyPrice2 = min(lowestBuyPrice2, prices[i] - max1); //decreases whenever we hit a local minimum price. reflects the lowest price that is closest to the current price
        	max1 = max(max1, prices[i] - lowestBuyPrice1);
        	lowestBuyPrice1 = min(lowestBuyPrice1, prices[i]) //global lowest price
        }
        return max2;
    }
};