class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<pair<int,int>> a(n);
        for(int i=0;i<n;i++){
            a[i]={nums[i],i};
        }
        sort(a.begin(),a.end());
        vector<int> ans(2);
        int l=0,r=nums.size()-1;
        while(l<=r){
            if(a[l].first+a[r].first>target){
                r--;
            }
            else if (a[l].first+a[r].first<target) l++;
            else {
                ans[0]=a[l].second;ans[1]=a[r].second;
                break;
            }
        }
        
        return ans;
    }
};