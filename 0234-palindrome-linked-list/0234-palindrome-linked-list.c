/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
           int arr[100000];
           int n=0;
           while(head!=NULL)
           {
            arr[n++]=head->val;
            head=head->next;
           }
           for(int i=0;i<n/2;i++)
           {
           if(arr[i]!=arr[n-1-i])
           {
            return false;
           }
           }
           return true;
}