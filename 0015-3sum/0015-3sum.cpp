class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>> res;
        for(int i=0;i<n;i++){
            int l=i+1,r=n-1;
            while(l<r){
                int target=-nums[l]-nums[r];
                if(target==nums[i]) {
                    res.insert({nums[i],nums[l],nums[r]});
                    l++,r--;
            
                }
                else if(target<nums[i]) r--;
                else l++;
            }
        }
        vector<vector<int>> v;
        for(auto x : res){
            v.emplace_back(x);
        }
        return v;
        
    }
};