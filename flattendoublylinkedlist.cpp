class Solution {
public:
   
    Node* flatten(Node* head) {
      if(head==NULL)
      {
          return head;
      }
        Node* it = head;
        
        while(it!=NULL)
        {
            if(it->child!=NULL)
            {
                Node* next = it->next;
                it->next = flatten(it->child);
                it->next->prev = it;
                it->child=NULL;
                
                while(it->next!=NULL){
                    it=it->next;
                }
                
                if(next!=NULL)
                {
                    it->next=next;
                    it->next->prev=it;
                }
            }
            it=it->next;
        }
        return head;
    }
};