class Solution {
public:
    bool lemonadeChange(vector<int>& bill) {
        int cnt5=0,cnt10=0,cnt20=0;
        for(int i=0;i<bill.size();i++){
            if(bill[i]==5){
                cnt5++;
            }
            else if(bill[i]==10){
                if(cnt5>0){
                    cnt5--;
                    cnt10++;
                }
                else return 0;
            }
            else{
                if(cnt10>0 && cnt5>0){
                    cnt10--,cnt5--;
                }
                else if(cnt5>=3){
                    cnt5-=3;
                }
                else return 0;
            }
        }
        return 1;
        
    }
};