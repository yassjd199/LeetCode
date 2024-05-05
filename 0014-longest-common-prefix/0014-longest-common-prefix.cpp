class Solution {
public:
    bool verif(int i,int sz,vector<string>& strs){
        for(auto str : strs){
            if(str[i]!=strs[0][i]) return 0;
        }
        return 1;
        
    }
    string longestCommonPrefix(vector<string>& strs) {
        int sz=250;
        for(auto str : strs) {
            sz=min(sz,(int)str.size());
        }
        int longestCommonPrefixSz=0;
        for(int i=0;i<sz;i++) {
            if(verif(i,sz,strs)) longestCommonPrefixSz++;
            else break ;
        }
        return strs[0].substr(0,longestCommonPrefixSz);
        
    }
};