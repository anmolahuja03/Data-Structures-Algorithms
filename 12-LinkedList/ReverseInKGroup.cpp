/*
@author Anmol Ahuja
Reference : https://leetcode.com/problems/reverse-nodes-in-k-group/
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
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        if (k <= 1)
            return head;
        if (head == NULL)
            return head;

        ListNode *prev = NULL;
        ListNode *curr = head;
        ListNode *next;

        int cnt = 0;

        //Reversing the first k part of the list
        while (curr != NULL && cnt < k)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            cnt++;
        }

        //Recursive func for the other part of the List
        if (next != NULL)
        {
            int i = 0;
            ListNode *temp = next;
            while (temp && i < k)
            {
                temp = temp->next;
                i++;
            }
            if (i == k)
                head->next = reverseKGroup(next, k);
            else
                head->next = next;
        }

        return prev;
    }
};