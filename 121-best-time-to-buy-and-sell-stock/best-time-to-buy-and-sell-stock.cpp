class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n = prices.size();
    
    if (n <= 1) {
        // If there are fewer than two days, no profit can be made
        return 0;
    }

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < n; ++i) {
        // Update the minimum price if the current price is smaller
        minPrice = min(minPrice, prices[i]);

        // Update the maximum profit if selling at the current price gives a better profit
        maxProfit = max(maxProfit, prices[i] - minPrice);
    }

    return maxProfit; 
    }
};