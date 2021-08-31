/*
@author Anmol Ahuja
Reference : https://leetcode.com/problems/merge-two-sorted-lists/
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListcNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        // Iterative
        if (!l1)
            return l2;
        if (!l2)
            return l1;

        ListNode *head, *tail;
        ListNode *p1 = l1, *p2 = l2;
        if (l1->val <= l2->val)
        {
            head = l1;
            tail = l1;
            p1 = p1->next;
        }
        else
        {
            head = l2;
            tail = l2;
            p2 = p2->next;
        }
        while (p1 && p2)
        {
            if (p1->val <= p2->val)
            {
                tail->next = p1;
                p1 = p1->next;
            }
            else
            {
                tail->next = p2;
                p2 = p2->next;
            }
            tail = tail->next;
        }
        if (p1)
            tail->next = p1;
        if (p2)
            tail->next = p2;
        return head;



        // Recursive
        if (!l1)
            return l2;
        if (!l2)
            return l1;

        ListNode *head, *temp;
        if (l1->val <= l2->val)
        {
            head = l1;
            temp = head->next;
            head->next = NULL;
            head->next = mergeTwoLists(temp, l2);
        }
        else
        {
            head = l2;
            temp = head->next;
            head->next = NULL;
            head->next = mergeTwoLists(l1, temp);
        }
        return head;
    }
};