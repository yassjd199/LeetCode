class Solution {
public:
    int maxArea(vector<int>& h) {
        int n=h.size();
        int l=0,r=n-1;
        int ans=0;
        while(l<r){
            ans=max(ans,min(h[l],h[r])*(r-l));
            if(h[l]>h[r])r--;
            else l++;
        }
        return ans ;
        
        
    }
};