class Solution {
    public:
        vector<int> productExceptSelf(vector<int>& nums) {
            vector<int> prefix((int)nums.size() + 1, 1), suffix((int)nums.size() + 1, 1), ans((int)nums.size(), 1);
            for (int i = 1; i <= (int)nums.size(); i++) {
                prefix[i] = prefix[i - 1] * nums[i - 1];
                suffix[i] = suffix[i - 1] * nums[(int)nums.size() - i];
            }
            for (int i = 1; i <= (int)nums.size(); i++) {
                ans[i - 1] = prefix[i - 1] * suffix[(int)nums.size()-i];
               
            }
            return ans;

        }
};