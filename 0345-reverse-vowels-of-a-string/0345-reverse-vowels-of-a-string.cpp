class Solution {
public:
    bool ok(char x){
        x=tolower(x);
        return x=='a'||x=='e'||x=='i'||x=='o'||x=='u';
    }
    string reverseVowels(string s) {
        int n=s.size();
        int l=0,r=n-1;
        set<char> se;
        while(l<r){
            while(l<r && !ok(s[l])) l++;
            while(l<r && !ok(s[r])) r--;
            if(l>=r) return s ;
            swap(s[l],s[r]);
            l++,r--;
        }
        return s ;
        
    }
};