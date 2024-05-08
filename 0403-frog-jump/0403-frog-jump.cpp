class Solution {
    public:
        int nextIndex(int i, int jumpLen, vector<int> &stones) {
            if (jumpLen <= 0) return -1;
            int res = lower_bound(stones.begin() + i, stones.end(), stones[i] + jumpLen) - stones.begin();
            if (res == (int)stones.size()) return -1;
            return res;
        }
        bool can(int i, int k, vector<int> &stones, vector<vector<int>> &dp) {
            if (i == (int)stones.size() - 1) return 1;
            if (i >= stones.size() - 1) return 0;
            int &ret = dp[i][k];
            if (~ret) return ret;
            ret = 0;
            for (auto x : { k, k - 1, k + 1}) {
                int pos = nextIndex(i, x, stones);
                if (pos != -1 && stones[pos] == stones[i] + x) {
                    ret |= can(pos, x, stones, dp);
                }
            }
            return ret;

        }

        bool canCross(vector<int>& stones) {
            vector<vector<int>> dp((int)stones.size(), vector<int>((int)stones.size(), -1));
            return can(0, 0, stones, dp);
        }
};