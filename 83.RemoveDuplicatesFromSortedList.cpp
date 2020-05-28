class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
  
    auto sc = head;
    if(head){
        while(head and head->next){
            if(head -> val == head->next->val)
                head->next = head -> next ->next;
            else
                head = head -> next;
        }
    }
    return sc;
        
        
    }
};
