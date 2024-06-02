class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        int n=nums.size();
        long long ans=(n*1ll*(n-1)/2);
        map<int,long long> fr;
        for(int i=0;i<n;i++){
            ans-=fr[nums[i]-i];
            fr[nums[i]-i]++;
        }
        return ans ;
        
        
    }
};