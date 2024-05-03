class Solution {
public:
    
    int minCost(int i,vector<int> &cost, vector<int> &dp){
        if(i>=cost.size()){
            return 0;
        }
        if(dp[i]!=-1) return dp[i];
        return dp[i]= cost[i]+min(minCost(i+1,cost,dp),minCost(i+2,cost,dp));
    }
    
    
    
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size()+1,-1);
        int res= minCost(0,cost,dp);
        dp.clear();
        dp.resize(cost.size()+1,-1);
        res=min(res,minCost(1,cost,dp));
        return res;
    }
};