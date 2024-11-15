class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        long long sum =0;
        int l=0,r=0;
        int ans=nums.size()+1;
        for(;r<nums.size();r++){
            sum+=nums[r];
            while(l<r && sum-nums[l]>=target) {
                //
                sum-=nums[l];
                l++;
            }
            
           if(sum>=target) ans=min(ans,r-l+1);
            
        }
        if(ans==nums.size()+1) ans=0;
        return ans;
        
    }
};