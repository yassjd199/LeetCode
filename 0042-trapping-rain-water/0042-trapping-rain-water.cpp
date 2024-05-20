class Solution {
    public:
        int trap(vector<int>& height) {
            int n = height.size();
            vector<int>p(n), s(n);
            p[0] = height[0];
            s[0] = height[n - 1];
            for (int i = 1; i < n; i++) {
                p[i] = max(height[i], p[i - 1]);
                s[i] = max(height[n - i - 1], s[i - 1]);
            }
            int ans = 0;
            for (int i = 1; i < n - 1; i++) {
                ans += (height[i] < p[i - 1] && height[i] < s[n - i - 1]) * (min(s[n - i - 1], p[i - 1]) - height[i]);
            }
            return ans;
        }
};