class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int minPrice = INT_MAX;
        int maxPrice = 0;

        for(int i = 0; i < prices.size(); ++i) {
            minPrice = std::min(minPrice, prices[i]);
            maxPrice = std::max(maxPrice, prices[i] - minPrice);
        }

        return maxPrice;
        
    }
};
