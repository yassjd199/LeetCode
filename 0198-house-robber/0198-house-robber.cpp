class Solution {
public:
    int rob(vector<int>& nums) {
        int n =(int)nums.size();
        // vector<vector<int>> dp(n+1,vector<int>(2));
        vector<int> dp(2);
        for(int i=1;i<=n;i++){
            int x=max(dp[0],dp[1]);
            int y = dp[0]+nums[i-1];
            dp[0]=x;
            dp[1]=y;
        }

        return max(dp[0],dp[1]);
        
    }
};