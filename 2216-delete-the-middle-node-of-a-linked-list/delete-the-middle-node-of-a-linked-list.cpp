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
     //finding middle element first
     if (head == NULL || head->next == NULL) {
            return NULL;
        }
    // ListNode* temp= head;
     ListNode*slw= head;
     ListNode*fast=head;
     ListNode* oneBe=NULL;
     while(fast!=NULL && fast->next!=NULL){
        oneBe=slw;
        slw = slw->next;
        fast=fast->next->next;
     }
      oneBe->next=slw->next;
    
      return head;
           
    }
};