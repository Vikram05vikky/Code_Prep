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
    ListNode* middleNode(ListNode* head) {
        // int c=0;
        // ListNode* temp = head;
        // while(temp)
        // {
        //     c++;
        //     temp=temp->next;
        // }
        // // cout<<c;
        // int m=c/2;
        // int a=0;
        // while(a!=m)
        // {
        //     a++;
        //     head=head->next;
        // }
        // return head;

        ListNode* fast = head;
        ListNode* slow = head;

        while(fast!=NULL && fast->next != NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};
