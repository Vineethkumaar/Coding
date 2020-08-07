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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
       if(l1==NULL)
           return l2;
        if(l2==NULL)
            return l1;
                
        ListNode *t=NULL,*p,*head=NULL;
    
        
        int carry=0;
      
        while(l1!=NULL || l2!=NULL)
        {   
            int x = l1 ? l1->val : 0 ;
            int y = l2 ? l2->val : 0 ;
            int z= (x+y+carry);
                  
            carry=z/10;
            
            cout<<" "<<x;
            
            p=new ListNode(z%10);
            
            if(head==NULL)
            {
                head=p;
                t=p;
            }
            else
            {
                t->next=p;
                t=p;   
            }
            
            if(l1!=NULL)
            l1=l1->next;
            if(l2!=NULL)
            l2=l2->next;
            
            
            cout<<"Here";
        }
        
        cout<<" HERE 2";
        
        if(carry!=0)
        {
            p= new ListNode(carry);
            t->next=p;
            cout<<"here 4";
        }
             
        cout<<" Here3";
        
        return head;
    }
};
