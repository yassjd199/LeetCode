class Solution {
public:
    int solve(int i,int k,vector<int> &arr ,vector<int> &dp){
        if(i>=arr.size()) return 0;
        int &ret=dp[i];
        if(~ret) return ret;
        ret=-2e9;
        int mx=-2e9;
        for(int j=i;j<min((int)arr.size(),i+k);j++){
            mx=max(mx,arr[j]);
            ret=max(ret,mx*(j-i+1)+solve(j+1,k,arr,dp));
        }
        return ret;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        vector<int> dp(arr.size()+1,-1);
        return solve(0,k,arr,dp);
        
    }
};