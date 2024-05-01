class Solution {
    public:
        int lengthOfLongestSubstring(string str) {
            int fr[256] {};
            int l = 0, r = 0, ans = 0;
            for (r; r < str.size(); r++) {
                fr[(int)str[r]]++;
                while ((int)fr[str[r]] > 1) fr[(int)str[l++]]--;
                ans = max(ans, r - l + 1);
            }
            return ans;

        }
};