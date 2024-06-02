class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int l=0,r=n-1;
        int ans=0;
        while(l<r){
            if(nums[r]+nums[l]==k) l++,r--,ans++;
            else if(nums[r]+nums[l]>k) r--;
            else l++;
        }
        return ans;
        
    }
};