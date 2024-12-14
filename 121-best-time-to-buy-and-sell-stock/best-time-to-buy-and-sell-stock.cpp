class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size(); // Use .size() to get the number of elements
        if (size == 0) return 0;  // Edge case: If there are no prices, return 0

        int minPrice = prices[0]; // Initialize minPrice as the first day's price
        int maxProfit = 0;        // Initialize maxProfit to 0

        // Loop through the prices starting from the second day
        for (int i = 1; i < size; i++) {
            // Calculate profit if selling on the current day
            int profit = prices[i] - minPrice;

            // Update maxProfit if the current profit is higher
            if (profit > maxProfit) {
                maxProfit = profit;
            }

            // Update minPrice if the current price is lower
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            }
        }

        return maxProfit;  // Return the maximum profit found
    }
};
