class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0;
        int j = 1;
        int maxprofit = 0;

        while (j < prices.size()) {
            if (prices[j] > prices[i]) {
                int profit = prices[j] - prices[i];
                maxprofit = max(maxprofit, profit);
            } else {
                i = j;
            }

            j++;
        }

        return maxprofit;
    }
};