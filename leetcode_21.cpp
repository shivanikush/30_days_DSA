ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;
        
        if(list1->val > list2->val){
            std::swap(list1, list2);
        }
        ListNode *tail = NULL;
        ListNode *h1 = list1;
        while(list1!=NULL && list2!=NULL){
            while(list1!= NULL && list1->val <= list2->val){
                tail = list1;
                list1 = list1->next;
            }
            tail->next = list2;
            std::swap(list1, list2);
        }
        return h1;
    
    }
