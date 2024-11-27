class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        for(int l=0,r=0;r<n;r++){
            if(r>l && nums[r]==0) swap(nums[l],nums[r]);
            while(l<n && !(nums[l]==1 || nums[l]==2)) l++;
        }
        for(int l=0,r=0;r<n;r++){
            if(r>l && nums[r]==1) swap(nums[l],nums[r]);
            while(l<n && nums[l]!=2) l++;
        }
        
    }
};