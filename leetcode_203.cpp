ListNode* removeElements(ListNode* head, int val) {
        if(head== NULL) return head;
        while(head!=NULL && head->val == val){
            head = head->next;
        }
        ListNode *cur = head;
        ListNode *prev = NULL;
        while(cur!=NULL){
            if(cur->val == val){
                prev ->next = cur->next;
                cur = cur->next;
            }
            else{
                prev = cur;
                cur = cur->next;
            }
        }
        return head;
    }
