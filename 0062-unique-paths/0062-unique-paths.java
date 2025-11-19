class Solution {
    public int uniquePaths(int m, int n) {
        long ans = 1  ; 
        n--;
        m--;
        for(long i =(n+1),j=1;i<=(n+m);i++,j++){
            ans*=i ; 
            if(j<=m) ans/=j;
        }

        return (int) ans ; 
        
    }
}