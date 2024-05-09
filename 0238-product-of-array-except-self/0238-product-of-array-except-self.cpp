class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=(int)nums.size();
        vector<int> ans(n,1);
        int l=nums[0];
        for(int i=1;i<n;i++){
            ans[i]*=l;
            l*=nums[i];
        }
        int r=nums[n-1];
        for(int i=n-2;i>=0;i--){
            ans[i]*=r;
            r*=nums[i];
        }
        return ans;
        
    }
};