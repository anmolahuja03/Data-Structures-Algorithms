/*
@author Anmol Ahuja
Reference : https://leetcode.com/problems/remove-nth-node-from-end-of-list/
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
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Optimal : Two Pointers
        ListNode *p1 = head, *p2 = head;
        int c = 0;
        while(c < n) {
            p2 = p2->next;
            c++;
        }
        if(!p2) {
            ListNode *tmp = head->next;
            delete head;
            return tmp;
        }
        while(p2->next) {
            p1 = p1->next;
            p2 = p2->next;
        }
        ListNode *tmp = p1->next;
        p1->next = p1->next->next;
        delete tmp;
        return head;
    }
};