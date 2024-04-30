class Solution {
public:
    long long dp[201][201];
    bool ok(int a,int b,int n,int m) {return a>=0 && a<n && b>=0 && b<m ;}
    long long solve(int a,int b,vector<vector<int>>& grid){
        int m=grid[0].size(),n=grid.size();
        if(a==0 && b==0) return grid[a][b]*1ll;
        if(!ok(a,b,n,m)) return (1ll<<61);
        if(dp[a][b]!=(1ll<<61)) return dp[a][b];
        return dp[a][b]=grid[a][b]+min(solve(a-1,b,grid),solve(a,b-1,grid));
   
    }
    long long minPathSum(vector<vector<int>>& grid) {
        int m=grid[0].size(),n=grid.size();
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++) dp[i][j]=(1ll<<61);
        return solve(n-1,m-1,grid);
        
        
    }
};