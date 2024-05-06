class Solution {
    public:
        vector<int> spiralOrder(vector<vector<int>>& matrix) {
            vector<int> res;
            int top = 0, bottom = matrix.size() - 1, left = 0, right = matrix[0].size() - 1;
            while (top <= bottom && left <= right) {

                for (int i = left; i <= right; i++) {
                    res.emplace_back(matrix[top][i]);
                }
                top++;
                for (int i = top; i <= bottom; i++) {
                    res.emplace_back(matrix[i][right]);

                }
                right--;
                if (top <= bottom) {
                    for (int i = right; i >= left; i--) {
                        res.emplace_back(matrix[bottom][i]);
                    }
                    bottom--;
                }
                if (left <= right) {
                    for (int i = bottom ; i >= top; i--) {
                        res.emplace_back(matrix[i][left]);
                    }
                    left++;
                }

            }
            return res;

        }
};