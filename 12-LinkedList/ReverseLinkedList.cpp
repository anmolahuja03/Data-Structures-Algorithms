/*
@author Anmol Ahuja
Reference : https: //leetcode.com/problems/reverse-linked-list/
*/

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
class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        // Extra Auxiliary Space
        vector<int> arr;
        for (ListNode *curr = head; curr != NULL; curr = curr->next)
        {
            arr.push_back(curr->val);
        }
        for (ListNode *curr = head; curr != NULL; curr = curr->next)
        {
            curr->val = arr.back();
            arr.pop_back();
        }
        return head;



        // Iteratively
        ListNode *prev = NULL;
        ListNode *curr = head;
        ListNode *next;

        while (curr ! = NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;



        // Recursively
        // base case
        if (head == NULL || head->next == NULL)
        {
            return head;
        }

        // for reversing the other part of linked list
        ListNode *newhead = reverseList(head->next);
        // changing the next pointer of head's next
        // and pointing it to head
        head->next->next = head;
        // making head's next point to NULL
        head->next = NULL;

        return newhead;
    }
};