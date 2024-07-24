/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA=0,lenB=0;
      ListNode *a=headA;
      ListNode* b=headB;
      while(a!=NULL){
        a=a->next;
        lenA++;
      } 
       while(b!=NULL){
        b=b->next;
        lenB++;
      } 
       a=headA;
       b=headB;
      if(lenA>lenB){
        int diff=lenA-lenB;
        for(int i=0;i<diff;i++){
            a=a->next;
        }
        while(a!=b){
            a=a->next;
            b=b->next;
        }
        return a;
      } 
      else{
       int diff=lenB-lenA;
        for(int i=0;i<diff;i++)
        b=b->next;

        while(a!=b){
            a=a->next;
            b=b->next;
        }
        return b;
      }
    }
};