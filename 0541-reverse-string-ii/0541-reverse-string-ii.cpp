class Solution {
public:
    
    void rev(int l,int r,string &str){
        while(l<r) swap(str[l++],str[r--]);
    }
    string reverseStr(string s, int k) {
        int n=s.size();
        bool c=1;
        for(int i=0;i<n;i+=k){
            int j=min(n-1,i+k-1);
            if(c) rev(i,j,s);
            c^=1;
        }
        return s;
    }
};