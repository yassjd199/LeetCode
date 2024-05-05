class Solution {
    public:
        vector<vector<int>> generate(int numRows) {
            vector<vector<int>> res;
            res.push_back({1});
            for (int i = 1; i < numRows; i++) {
                vector<int> tmp;
                tmp.emplace_back(1);
                for (int j = 1; j < res.back().size(); j++) {
                    tmp.emplace_back(res.back()[j] + res.back()[j - 1]);
                }
                tmp.emplace_back(1);
                res.emplace_back(tmp);
            }
            return res;

        }
};