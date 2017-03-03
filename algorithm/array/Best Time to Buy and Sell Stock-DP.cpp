class Solution { //DP solution
public:
    int maxProfit(vector<int>& prices) {
        int preMax = 0;
        int max = 0;
        if(prices.size() == 0) return 0;
        for(int i=0; i < prices.size()-1; i++){
            prices[i] = prices[i+1] - prices[i]; //operator is faster than at();
        }
        prices[prices.size()-1] = 0;
        
        for(int i=0; i < prices.size(); i++){
            preMax = (prices[i] > prices[i]+preMax)?prices[i]:prices[i]+preMax;
            max = (preMax > max)?preMax:max;
        }
        
        
        return max;
    }
};