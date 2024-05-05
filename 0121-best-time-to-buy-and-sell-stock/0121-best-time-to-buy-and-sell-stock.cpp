struct SparseTable {
    int n, m;
    vector<vector<int>> sp;
    int merg(int l, int r) {
        // change operation here ;
        return max(l, r);
    }
    SparseTable(int _n) {
        n = _n;
        m = (int)log2(n) + 2;
        sp.resize(n, vector<int>(m));
    }
    void build(vector<int> &v) {
        for (int i = 0; i < n; i++) sp[i][0] = v[i];
        for (int j = 1; j < m; j++)
            for (int i = 0; i + (1 << j) <= n; i++)
                sp[i][j] = merg(sp[i][j - 1], sp[i + (1 << (j - 1))][j - 1]);
    }
    int query(int l, int r) {
        if (l > n) return 0;
        if (r - l + 1 == 0) return 0;
        int x = (int)log2(r - l + 1);
        return merg(sp[l][x], sp[r - (1 << x) + 1][x]);
    }
};

class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            SparseTable sp((int)prices.size());
            sp.build(prices);
            int res = 0;
            for (int i = 0; i < (int)prices.size(); i++) {
                res = max(res, sp.query(i + 1, (int)prices.size() - 1) - prices[i]);
            }
            return res;

        }
};
