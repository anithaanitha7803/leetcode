/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head){
      struct ListNode* curr=head;
   struct ListNode* node=NULL;
   while(curr!=NULL)
   {
    struct ListNode* temp=curr->next;
    curr->next=node;
    node=curr;
    curr=temp;

   }
   return node;
   }