class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        map<int,int> fr;
        int ans=0;
        for(int i=0;i<(int)nums.size();i++){
            ans+=fr[nums[i]-k];
            ans+=fr[nums[i]+k];
            fr[nums[i]]++;
            
        }
        return ans;
        
        
    }
};