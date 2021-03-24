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
    ListNode* swapNodes(ListNode* head, int k) {
        
        
        if(head->next==NULL)
            return head;
        
        int x=-1,y=-1,n=0;      
        ListNode *temp=head;    
        
        while(temp!=NULL)
        {
            temp=temp->next;
            n++;
        }

        temp=head;
         for(int i=1 ; temp!=NULL ; i++)
         {
              if(i==k)
              x=temp->val;
            if(i==n-k+1)
               y=temp->val;
             
             if(x>-1 && y>-1)
                 break;
             
             temp=temp->next;
         }      
        temp=head;
        
       for(int i=1 ; temp!=NULL||i<(n-k+2) ; i++)
       {
           if(i==k)
               temp->val=y;
            if(i==n-k+1)
                temp->val=x;
           
           temp=temp->next;
       }
        
        
        return head;
        
    }
};
