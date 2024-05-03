class Solution {
public:
    
    int Ways(int i, vector<int> &dp){
        // base case
        if(i<=0){
            return i==0;
        }
        if(dp[i]!=-1) return dp[i];
        int res= Ways(i-1,dp)+Ways(i-2,dp);
        return dp[i]=res;
        
    }
    
    
    
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return Ways(n,dp);
        
    }
};