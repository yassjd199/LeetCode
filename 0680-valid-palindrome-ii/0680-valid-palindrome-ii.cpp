class Solution {
public:
    
    bool check(int l, int r,string &str){
        while(l<r){
            if(str[l]!=str[r]) return false; 
            l++,r--;
        }
        return true ;
    }
    bool validPalindrome(string s) {
        int n=s.size();
        int l=0,r=n-1;
        while(l<r){
            if(s[l]==s[r]) l++,r--;
            else return check(l+1,r,s) || check(l,r-1,s);
        }
        return true ;
        
    }
};