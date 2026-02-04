class Solution {

    int Solve(int a[],int l , int k,int n,int dp[] ){
        if(l>=n) return 0 ; 
        int ret = dp[l];
        if(ret!=-1) return ret ; 
        int mx = a[l];
        for(int i = l ;i<Math.min(n,l+k);i++){
            mx = Math.max(a[i],mx);
            ret = Math.max(ret , mx*(i-l+1)+Solve(a,i+1,k,n,dp));
        }

        return dp[l] = ret ; 
    }

    public int maxSumAfterPartitioning(int[] arr, int k) {
        int n = arr.length;
        int dp[] = new int[n];
        Arrays.fill(dp,-1);
        return Solve(arr ,0,k,n , dp);
    }
}