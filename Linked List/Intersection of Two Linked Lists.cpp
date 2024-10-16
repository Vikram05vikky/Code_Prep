/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp=headA;

        while(temp)
        {
            temp->val= -1 * (temp->val);
            temp=temp->next;
        }

        ListNode* ans=NULL;
        ListNode* temp1=headB;

        while(temp1)
        {
            if(temp1->val < 0)
            {
                ans=temp1;
                break;
            }
            temp1=temp1->next;
            
        }
        temp = headA;
        while (temp) {
            temp->val = -1 * (temp->val); 
            temp = temp->next;
        }

        return ans;
    }
};


// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         ListNode* temp=headA;

//         while(temp)
//         {
//             temp->val= -1 * (temp->val);
//             temp=temp->next;
//         }

//         ListNode* ans=NULL;
//         ListNode* temp1=headB;

//         while(temp1)
//         {
//             if(temp1->val < 0)
//             {
//                 ans=temp1;
//                 break;
//             }
//             temp1=temp1->next;
            
//         }
//         temp = headA;
//         while (temp) {
//             temp->val = -1 * (temp->val); 
//             temp = temp->next;
//         }

//         return ans;
//     }
// };
