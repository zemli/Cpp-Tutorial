class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0) return 0;
        int min = prices[0], max = prices[0];
        int profit = 0, sum = 0;
        for(int i=1; i < prices.size(); i++) {
            if(prices[i] > max) { //if the price increseases, continue to next
                max = prices[i];
                continue;
            }
            if(prices[i] < max) {
                profit = prices[i - 1] - min; //if the price decreases, sell it before decreases
                sum += profit;
                min = max = prices[i];
            }
        }
        profit = max - min; //sell it anyway, when at the end
        sum += profit;
        return sum;
    }
};