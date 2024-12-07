class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        
        
        priority_queue <pair<int,pair<int,int>>> pq;
        int n=heights.size(),m=heights[0].size();
        vector<vector<int>> dp(n,vector<int>(m));
        
        auto ok = [&](int x,int y)->bool{
            return x<n && x>=0 && y<m && y>=0;
            
        };
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++) dp[i][j]=1e9;
        }
        dp[0][0]=0;
        int dx[]={0,0,-1,1},dy[]={-1,1,0,0};
        
        pq.push({0,{0,0}});
        
        while(!pq.empty()){
            
            pair<int,int> p = pq.top().second;
            int d=-pq.top().first;
            pq.pop();
            int x=p.first,y=p.second;
            if(d<dp[x][y]) continue ;
            
            for(int i=0;i<4;i++){
                int a=x+dx[i],b=y+dy[i];
                if(!ok(a,b)) continue ;
                int cost = max(d,abs(heights[x][y]-heights[a][b]));
                if(cost<dp[a][b]){
                    dp[a][b]=cost ;
                    pq.push({-dp[a][b],{a,b}});
                }
            } 
        }
        return dp[n-1][m-1];
        
    }
};