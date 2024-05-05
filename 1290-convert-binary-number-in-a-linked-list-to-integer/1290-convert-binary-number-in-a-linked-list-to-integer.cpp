/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int result=0;
        int MSB=0;
        ListNode* backUpHead=head ;
   
        while(head->next!=nullptr){
            MSB++;
            head=head->next;
        }
        while(1){
            result+=backUpHead->val*(1<<(MSB--));
            if(backUpHead->next==nullptr) break ;
            backUpHead=backUpHead->next;
        }
        return result ;
        
    }
};