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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        ListNode* cur1=list1;
        ListNode* cur2=list1;
        a--;
        while(a--) cur1=cur1->next;
        while(b--) cur2=cur2->next; 
        cur1->next=list2;
        while(list2->next) list2=list2->next;
        list2->next=cur2->next;

        
        return list1 ;
        
        
    }
};