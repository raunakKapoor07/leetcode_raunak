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
    ListNode* reverse(ListNode* temp){
        ListNode* pr=NULL;
        ListNode* fr=temp->next;
        while(temp!=NULL){
            temp->next=pr;
            pr=temp;
            temp=fr;
            if(fr!=NULL){
                fr=fr->next;
            }
        }
        return pr;
    }
    ListNode* getkthnode(ListNode* temp,int k){
        k--;
        while(temp!=NULL && k>0){
            k--;
            temp=temp->next;
        }
        return temp;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* prev=NULL;
        while(temp!=NULL){
            ListNode* kth= getkthnode(temp,k);
            if(kth == NULL){
                prev->next=temp;
                break;
            }
            ListNode* next=kth->next;
            kth->next=NULL;
            reverse(temp);
            if(temp==head){
                head=kth;
            }
            else{
                prev->next=kth;
            }
            prev=temp;
            temp=next;
        }
        return head;
    }
};