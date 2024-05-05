class Solution {
    public:
        int getAnswer(int i, int prev, vector<int> &prices, vector<vector<int>> &dp) {
            if (prev == 2) return 0;
            if (i >= (int)prices.size()) return 0;

            int &res = dp[i][prev];
            if (~res) return res;
            res = getAnswer(i + 1, prev, prices, dp);
            if (prev == 0) res = max(res, getAnswer(i + 1, 1, prices, dp) - prices[i]);
            if (prev == 1) res = max(res, getAnswer(i + 1, 2, prices, dp) + prices[i]);
            return res;

        }
        int maxProfit(vector<int>& prices) {
            vector<vector<int>> dp(prices.size() + 1, vector<int>(3, -1));
            return getAnswer(0, 0, prices, dp);

        }
};