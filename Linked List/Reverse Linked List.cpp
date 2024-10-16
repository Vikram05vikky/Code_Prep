class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        ListNode* temp=nullptr;
        ListNode* curr=head;
        ListNode* prev=nullptr;

        while(curr!=nullptr)
        {
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
};
