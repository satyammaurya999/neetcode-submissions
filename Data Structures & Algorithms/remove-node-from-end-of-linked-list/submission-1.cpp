class Solution {
    int lengthofll(ListNode* head){
        int l=0;
        while(head!=NULL){
            l++;
            head=head->next;
        }
        return l;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=lengthofll(head);
        if(n==len){
            ListNode* temp=head->next;
            delete(head);
            return temp;
        }
        int travel=len-n;
        ListNode* prev=NULL;
        ListNode* temp=head;
        while(travel--){
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        delete(temp);
        return head;
    }
   
};
