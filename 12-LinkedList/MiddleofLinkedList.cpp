/*
@author Anmol Ahuja
Reference : https://leetcode.com/problems/middle-of-the-linked-list/
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
    ListNode *middleNode(ListNode *head)
    {
        // Two Pass Algorithm
        int count = 0;
        ListNode *curr = head;

        while (curr != NULL)
        {
            curr = curr->next;
            count++;
        }
        int ans = 0;
        ListNode *temp = head;
        while (ans < count / 2)
        {
            temp = temp->next;
            ans++;
        }
        return temp;



        // One Pass (Using fast and slow pointers)
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};