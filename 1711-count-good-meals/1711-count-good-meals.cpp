class Solution {
public:
    int countPairs(vector<int>& d) {
        map <int,int> fr;
        int n=d.size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<=30;j++){
                ans+=fr[(1<<j)-d[i]];
                ans%=((int)1e9+7);
            }
            fr[d[i]]++;
            fr[d[i]]%=((int)1e9+7);
        }
        return ans;
        
    }
};