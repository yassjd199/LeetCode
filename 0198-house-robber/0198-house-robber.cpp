class Solution {
public:
    int rob(vector<int>& nums) {
        int n =(int)nums.size();
        // vector<vector<int>> dp(n+1,vector<int>(2));
        int x=0,y=0;
        for(int i=1;i<=n;i++){
            int px=max(x,y);
            int py = x+nums[i-1];
            x=px;
            y=py;
        }

        return max(x,y);
        
    }
};