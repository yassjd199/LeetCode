class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n=skill.size();
        sort(skill.begin(),skill.end());
        long long res=0;
        int l=0,r=n-1;
        while(l<r){
            if(skill[l]+skill[r]!=skill[0]+skill[n-1]){
                res=-1;
                break ;
            }
            res+=(skill[l]*skill[r]*1ll);
            l++,r--;
        }
        return res;
        
    }
};