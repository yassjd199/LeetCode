class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        queue<int> zeroPos;
        for(int i=0;i<nums.size();i++){
            if(!nums[i]){
                zeroPos.push(i);
                continue ;
            }
            if(nums[i] && zeroPos.empty()) continue ;
            else{
                swap(nums[i],nums[zeroPos.front()]);
                zeroPos.pop();
                zeroPos.push(i);
            }
            
        }
        
    }
};