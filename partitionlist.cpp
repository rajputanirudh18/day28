 class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
      ListNode* left = new ListNode(-1);
        ListNode* temp1 = left;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            if(temp->val<x)
            {
                ListNode* n = new ListNode(temp->val);
                temp1->next = n;
                temp1= n;
            }
            temp = temp->next;
        }
        temp = head;
        
           ListNode* right = new ListNode(-1);
        ListNode* temp2 = right;
        while(temp!=NULL)
        {
            if(temp->val>=x)
            {
                ListNode* n = new ListNode(temp->val);
                temp2->next = n;
                temp2= n;
            }
            temp = temp->next;
        }
        
        temp1->next=right->next;
        return left->next;
        
        
        
    }
    
};