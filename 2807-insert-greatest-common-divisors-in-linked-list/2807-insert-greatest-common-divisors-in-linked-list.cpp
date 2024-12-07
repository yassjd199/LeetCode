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
    
    int gcd(int a,int b){
        return b==0 ? a:gcd(b,a%b);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        
        ListNode* prev=head;
        ListNode* cur=head->next ;
        
        while(cur){
            ListNode* tmp=new ListNode(gcd(prev->val,cur->val),cur);
            prev->next=tmp;
            prev=cur;
            cur=cur->next;
        }
        return head ;
    }
};