class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int n=haystack.size();
        int m=needle.size();
        
        vector<int> pi(m) ;
        for(int i=1,k=0;i<m;i++){
            while(k>0 && needle[k]!=needle[i]) k=pi[k-1];
            if(needle[i]==needle[k]) pi[i]=++k;
            else pi[i]=k;
        }
        for(int i=0,k=0;i<n;i++){
            while(k>0 && needle[k]!=haystack[i]) k=pi[k-1];
            if(haystack[i]==needle[k]) k++;
            if(k==m){
                return i-m+1; 
            }
        }
        return -1;
        
        
    }
};