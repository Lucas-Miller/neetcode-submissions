class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int sell = 0;

        int maxProfit = 0;


        for(int buy = 0; buy < prices.size(); ++buy) {
            sell = buy + 1;
            while(sell < prices.size()) {
                int profit = prices[sell] - prices[buy];
                maxProfit = std::max(profit, maxProfit);
                sell++;
            }
        }

        return maxProfit;


        
    }
};
