/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* temp=head;
        if (temp==NULL){
            return NULL;
        }
        if (temp->next==NULL){
            Node* newtemp=new Node(temp->val);
            if(temp->random==NULL){
                newtemp->random=NULL;
            }
            else{
                newtemp->random=newtemp;
            }
            return newtemp;

        }
        Node* newtemp= new Node(temp->val);
        Node* prev=newtemp;
        Node* head2=prev;
        temp=temp->next;
        while(temp!=NULL){
            newtemp= new Node(temp->val);
            prev->next=newtemp;
            prev=prev->next;
            temp=temp->next;
        }
        newtemp=head2;
        temp=head;
        while(newtemp!=NULL){
            int count=0;
            Node* temp3=temp;
            while(temp3!=temp->random && temp->random!=NULL){
                temp3=temp3->next;
                if(temp3==NULL){
                    temp3=head;
                }
                count++;
            }
            temp3=newtemp;
            while(count!=0){
                temp3=temp3->next;
                if(temp3==NULL){
                    temp3=head2;
                }
                count--;
            }
            if(temp->random!=NULL){
            newtemp->random=temp3;
            }
            else{
                newtemp->random=NULL;
            }
            temp=temp->next;
            newtemp=newtemp->next;
        }
        return head2;
    }
};