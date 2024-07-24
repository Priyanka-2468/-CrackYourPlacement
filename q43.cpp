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
    public: ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL){
            return head;
        }
        
        while(head!=NULL && head->val == val){
            head = head->next;
        }
        
        ListNode* prevNode = head;
        ListNode* nextNode = head;
        
        while(nextNode!=NULL) {
            if(nextNode->val == val) {
                prevNode->next = nextNode->next;
                nextNode = nextNode->next;
            }else{
                prevNode = nextNode;
                nextNode = nextNode->next;
            }
        }
        
        return head;
    }
};