#include <vector>
using namespace std;

class Solution {
public:
    int query(int a, int b, int c, int d, vector<vector<int>>& p) {
        return p[b][d] - p[b][c - 1] - p[a - 1][d] + p[a - 1][c - 1];
    }
    
    bool ok(int k, int i, int j, vector<vector<int>>& p) {
        return query(i - k, i, j - k, j, p) == (k+1) * (k+1);
    }
    
    int solve(int i, int j, vector<vector<int>>& p) {
        int l = 0, r = min(i-1, j-1), ans = -1, m;
        while (l <= r) {
            m = (l + r) >> 1;
            if (ok(m, i, j, p)) {
                ans = m;
                l = m + 1;
            } else {
                r = m - 1;
            }
        }
        return ans+1;
    }
    
    int countSquares(vector<vector<int>>& matrix) {
        vector<vector<int>> p(matrix.size() + 1, vector<int>(matrix[0].size() + 1));
        for (int i = 1; i <= matrix.size(); i++) {
            for (int j = 1; j <= matrix[0].size(); j++) {
                p[i][j] = p[i - 1][j] + p[i][j - 1] - p[i - 1][j - 1] + matrix[i - 1][j - 1];
            }
        }
        //cout<<ok(0,1,2,p)<<"ok"<<endl;
        int ans = 0;
        for (int i = 1; i <= matrix.size(); i++) {
            for (int j = 1; j <= matrix[0].size(); j++) {
               // cout<<solve(i, j, p)<<" ";
                ans += solve(i, j, p);
            }
        }
        return ans;
    }
};
