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
    ListNode* reverseList(ListNode* head) {
    
        ListNode *cur =NULL;
        ListNode *prev=NULL ;
        ListNode *tmp=head;
        
        while(tmp){
            cur=tmp;
            tmp=tmp->next;
            cur->next=prev;
            prev=cur;
        }
        return cur;
        
    }
};