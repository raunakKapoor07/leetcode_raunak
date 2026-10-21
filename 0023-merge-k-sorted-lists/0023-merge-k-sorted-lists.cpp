class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.empty()) {
            return NULL;
        }
        
        ListNode* list2 = lists[0];
        
        for (int i = 1; i < lists.size(); i++) {
            ListNode* temp1 = lists[i];
            ListNode* temp2 = list2;
            
            if (temp1 == NULL) continue;
            if (temp2 == NULL) {
                list2 = temp1;
                continue;
            }
                        ListNode dummy(0);
            ListNode* tail = &dummy;
            
            while (temp1 != NULL && temp2 != NULL) {
                if (temp1->val <= temp2->val) {
                    tail->next = temp1;
                    temp1 = temp1->next;
                } else {
                    tail->next = temp2;
                    temp2 = temp2->next;
                }
                tail = tail->next;
            }
            
            if (temp1 != NULL) {
                tail->next = temp1;
            } else {
                tail->next = temp2;
            }
            list2 = dummy.next;
        }
        
        return list2;
    }
};