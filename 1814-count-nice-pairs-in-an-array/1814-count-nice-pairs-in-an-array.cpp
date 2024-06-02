class Solution {
public:
    int rev(int x){
        if(!x) return x;
        int l=(int)log10(x);
        int res=0;
        while(x){
            res+=pow(10,l--)*(x%10);
            x/=10;
        }
        return res;
    }
    int countNicePairs(vector<int>& nums) {
        int n=nums.size(),ans=0;
        map<int,int> fr;
        for(int i=0;i<n;i++){
            ans+=fr[nums[i]-rev(nums[i])];
            fr[nums[i]-rev(nums[i])]++;
            ans%=(int)1e9+7;
            fr[nums[i]-rev(nums[i])]%=(int)1e9+7;
            
        }
        
        return ans;
        
    }
};