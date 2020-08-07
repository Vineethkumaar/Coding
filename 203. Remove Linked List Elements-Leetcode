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
    ListNode* removeElements(ListNode* head, int val) {
        
        ListNode *p=head,*q=head;
        
        if(head==NULL)
        {
            return NULL;
        }
        
       while(head!=NULL&&head->val==val)
       {
           head=head->next;
       }
        p=q=head;
        
        while(p!=NULL)
        {
            if(p->val==val)
                q->next=p->next;
            
            else{
                q=p;
            }
                p=p->next;
                               
        }
        
        return head;
    }
};
