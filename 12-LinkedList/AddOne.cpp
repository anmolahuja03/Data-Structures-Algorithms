/*
@author Anmol Ahuja
Reference : https://practice.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1#
*/

// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data;
        node = node->next;
    }
    cout << "\n";
}

// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
public:
    Node *reverse(Node *head)
    {
        Node *curr = head;
        Node *prev = NULL;
        Node *next;

        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    Node *addOne(Node *head)
    {
        // Your Code here
        // return head of list after adding one
        head = reverse(head);   //reversing to add one
        Node *curr = head;
        bool flag = true;

        while (curr != NULL && flag == true)
        {
            // Case 1 
            if (curr->next == NULL && curr->data == 9)
            {
                curr->data = 1;
                Node *temp = new Node(0);
                temp->next = head;
                head = temp;
                curr = curr->next;
            }
            // Case 2
            else if (curr->data == 9)
            {
                curr->data = 0;
                curr = curr->next;
            }
            // Case 3
            else
            {
                curr->data = curr->data + 1;
                curr = curr->next;
                flag = false;
            }
        }
        head = reverse(head);    //returning back the origin one after adding one
        return head;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        Node *head = new Node(s[0] - '0');
        Node *tail = head;
        for (int i = 1; i < s.size(); i++)
        {
            tail->next = new Node(s[i] - '0');
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head);
    }
    return 0;
}
// } Driver Code Ends