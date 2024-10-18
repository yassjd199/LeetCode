class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0,j=0;
        for(;i<s.size() && j<g.size();i++){
            if(s[i]>=g[j]) j++;
        }
        return j ;
        
    }
};