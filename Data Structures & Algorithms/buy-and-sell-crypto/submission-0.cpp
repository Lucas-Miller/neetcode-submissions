class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minPrice = prices[0];
        int maxProfit = INT_MIN;

        for(int i = 0; i < prices.size(); ++i) {
            minPrice = std::min(minPrice, prices[i]);
            maxProfit = std::max(maxProfit, prices[i] - minPrice);
        }

        return maxProfit;
    }
};
