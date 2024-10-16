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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* slow=head;
        ListNode* fast=head;
        k=k-1;
        while(k--)
        {
            fast=fast->next;
        }
        ListNode* temp=fast;
        while(fast->next)
        {
            fast=fast->next;
            slow=slow->next;
        }

        // slow->next=slow->next->next;
        swap(temp->val,slow->val);
        return head;
    }
};
