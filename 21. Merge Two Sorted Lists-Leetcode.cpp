class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode *x=l1,*y=l2,*t,*p,*head;
        
       if (x==NULL) return y;
       if(y==NULL) return x;
        
        if(x->val<=y->val) {head=x; x=x->next;}
        else {head=y; y=y->next;}
        
        p=head;
            
        
        while(x&&y)
        {
          if(x->val<=y->val)
          {
              p->next=x;
              x=x->next;
          }
            else
            {
                p->next=y;
                y=y->next;
            }
          p=p->next;
            //cout<<"here";
        }
        
      if(x==NULL)
      {
          p->next=y;
          cout<<"here";
      }
        else
        {
            p->next=x;
        }
        
        return head;

    }
};
