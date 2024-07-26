/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode tmp=head;
        int size=0;
        while(tmp!=null){
            tmp=tmp.next;
            size++;
        }
        tmp=head;
        int pos=size-n;
        if(pos<0) return head;
        if(pos==0) return head.next;
        ListNode prev=null;
        tmp=head;
        int i=0;
        while(i<pos && tmp!=null){
            prev=tmp;
            tmp=tmp.next;
            i++;
        }
        prev.next=tmp.next;
        return head;
        
    }
}