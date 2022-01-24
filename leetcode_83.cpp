ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode *ptr = head;
        while(ptr->next!= NULL){
            if(ptr->val == ptr->next->val){
                ptr->next = ptr->next->next;
            }
            else ptr = ptr->next;
        }
     
        
       return head; 
    }
