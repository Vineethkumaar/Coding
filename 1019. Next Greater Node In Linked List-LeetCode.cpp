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
    vector<int> nextLargerNodes(ListNode* head) {
        
    vector<int> arr(0);
    ListNode* temp;
    int c;
    if(head==NULL)
        return arr;
       
    
    while(head!=NULL)
    {
        temp=head->next;
        c=head->val;
        
        while(temp!=NULL&&head->next!=NULL)
        {
             if(temp->val>c)
             {c=temp->val; break;}
            
            temp=temp->next;
        }
        
       if(head->val<c)
        arr.push_back(c);
        else arr.push_back(0);
        head=head->next;

    }    
    
    return arr;
    
        
    }
};
