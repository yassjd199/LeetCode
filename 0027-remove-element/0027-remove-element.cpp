class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int n=nums.size();
        int cnt=0;
        int l=0;
        for(int i=0;i<n;i++){
            cnt+=(nums[i]!=val);
           if(nums[i]!=val && l<i) swap(nums[i],nums[l]);
            while(l<n && nums[l]!=val)l++;
            
            
            
        }
        return cnt ;
        

        
    }
};