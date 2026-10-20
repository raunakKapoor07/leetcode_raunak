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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode* prev1=NULL;
        ListNode* prev2=NULL;
        bool begining=true;
        if(list1==NULL && list2==NULL){
            return NULL;
        }
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val<=temp2->val){
                if(prev1!=NULL){
                }
                prev1=temp1;
                temp1=temp1->next;
                prev1->next=temp2;
                if(begining){
                    list2=prev1;
                    temp2=prev1;
                }
                if(prev2!=NULL){
                    prev2->next=prev1;
                    prev2=prev1;
                }
            }
            else{
                prev2=temp2;
                temp2=temp2->next;
                begining=false;
            }
        }
        if(temp1!=NULL){
            prev2->next=temp1;
        }


        return list2;
    }
};