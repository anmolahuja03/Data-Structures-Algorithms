#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

// Traversal of Linked List
void print(Node *head)
{
    Node *curr = head;

    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

int main()
{
    // Node *head = new Node(10);
    // Node *temp = new Node(20);
    // Node *temp1 = new Node(30);

    // head->next = temp;
    // temp->next = temp1;

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    // cout << head->data << " " << temp->data << " " << temp1->data;
    cout << head->data << " " << head->next->data << " " << head->next->next->data << endl;
    print(head);
    return 0;
}
