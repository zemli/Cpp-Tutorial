class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0) return 0;
        int sum = 0;
        for(int i=0; i < prices.size()-1; i++) {
            if (prices[i+1]>prices[i]) sum += prices[i+1]-prices[i];  //it add all the increments between every price. it has the same result
        }
        return sum;
    }
};