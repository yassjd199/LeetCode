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
    ListNode* deleteMiddle(ListNode* head) {
        
        ListNode *slow=head;
        ListNode *fast=head;
        ListNode *prev=NULL;
        if(!head->next) return NULL ;
        while(fast){
            if(fast->next) fast=fast->next->next;
            else break ;
            prev=slow;
            slow=slow->next;

        }
        prev->next=slow->next;
        return head ;
        
        
    }
};