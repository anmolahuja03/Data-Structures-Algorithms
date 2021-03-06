/*
@author Anmol Ahuja
Reference : https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1
*/

// { Driver Code Starts
#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Link list Node */
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

int intersectPoint(struct Node *head1, struct Node *head2);

Node *inputList(int size)
{
    if (size == 0)
        return NULL;

    int val;
    cin >> val;

    Node *head = new Node(val);
    Node *tail = head;

    for (int i = 0; i < size - 1; i++)
    {
        cin >> val;
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

/* Driver program to test above function*/
int main()
{
    int T, n1, n2, n3;

    cin >> T;
    while (T--)
    {
        cin >> n1 >> n2 >> n3;

        Node *head1 = inputList(n1);
        Node *head2 = inputList(n2);
        Node *common = inputList(n3);

        Node *temp = head1;
        while (temp != NULL && temp->next != NULL)
            temp = temp->next;
        if (temp != NULL)
            temp->next = common;

        temp = head2;
        while (temp != NULL && temp->next != NULL)
            temp = temp->next;
        if (temp != NULL)
            temp->next = common;

        cout << intersectPoint(head1, head2) << endl;
    }
    return 0;
}

// } Driver Code Ends

/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node *head1, Node *head2)
{

    Node *curr1 = head1;
    Node *curr2 = head2;
    int c1 = 0, c2 = 0;

    // Calculating length of lists
    while (curr1 != NULL)
    {
        c1++;
        curr1 = curr1->next;
    }

    while (curr2 != NULL)
    {
        c2++;
        curr2 = curr2->next;
    }

    int diff = abs(c1 - c2);
    curr1 = head1;
    curr2 = head2;

    // till we reach a common level
    if (c1 > c2)
    {
        for (int i = 0; i < diff; i++)
        {
            curr1 = curr1->next;
        }
    }
    else if (c2 > c1)
    {
        for (int i = 0; i < diff; i++)
        {
            curr2 = curr2->next;
        }
    }

    while (curr1 != curr2)
    {
        curr1 = curr1->next;
        curr2 = curr2->next;
    }

    if (curr1 != NULL)
    {
        return curr1->data;
    }
    else
        return -1; //Edgecase
}
