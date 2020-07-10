class Solution {
public:
    Node* flatten(Node* head) {
        Node* temp,*p=head,*curr;
        while(p)
        {
            if(p->child!=NULL)
            {
                curr=p;
                temp=curr->next;
                curr->next=curr->child;
                curr->child->prev=curr;
                curr->child=NULL;
                while(curr->next)
                {
                    curr=curr->next;
                }
                curr->next=temp;
                if(temp!=NULL)
                    temp->prev=curr;
                    
            }
                p=p->next;
        }
        return head;
        
    }
};
