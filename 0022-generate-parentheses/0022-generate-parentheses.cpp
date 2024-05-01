class Solution {
public:
    bool verifSeq(string seq){
        
        
        return 1;
    }
    vector<string> v;
    void gen(int i,int n,string res,int sum){
        //cout<<res<<" ";
        if(sum<0) return ;
        if(i>=2*n){
            //cout<<sum<<" "<<res<<endl;
            if(sum==0) {
                
                v.emplace_back(res) ;
            }
            return ;
        }
        gen(i+1,n,res+"(",sum+1);
        gen(i+1,n,res+")",sum-1);
    }
    vector<string> generateParenthesis(int n) {
        gen(0,n,"",0);
        return v;
        
    }
};