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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        ListNode *temp=list1,*temp2=list2,*temp3;
        
        while(temp2->next!=NULL)
        temp2=temp2->next;
        
       // cout<<temp2->val;
        
        for(int i=0 ; i!=b+1 ; i++)
        {
            if(i==a-1)
                temp3=temp;
            if(i==b){
                cout<<temp->val;
                temp2->next=temp->next;
                temp->next=NULL;
            }
            temp=temp->next;
                
        }
        temp3->next=list2;
        
        
        
        return list1;
    }
};
