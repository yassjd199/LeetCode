class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]){
                int j=i-1;
                while(j>=0 && nums[j]==0){
                    swap(nums[j+1],nums[j]);
                    j--;
                }
            }
        }
        
    }
};