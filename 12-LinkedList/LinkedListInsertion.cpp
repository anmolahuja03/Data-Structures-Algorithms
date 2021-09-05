#include <iostream>
using namespace std;

class node {
public:
    int data;
    node *next;

    node (int data) {
        this->data = data;
        next = NULL;
    }
};

void insertAtHead(node * &head, int data) {
    if(head == NULL){
        head = new node(data);
        return;
    }

    //otherwise 
    node * n = new node(data);
    n->next = head;
    head = n;
} 

void insertAtMiddle(node * &head, int data, int pos) {
    if(pos == 0) {
        insertAtHead(head, data);
    }
    else {
         node *temp = head;
        for(int jump = 1; jump <= pos-1; jump++) {
            temp = temp->next;
        }
         node * n = new node(data);
         n->next = temp->next;
         temp->next = n;
    }
}

void printLL(node *head) {
    while(head != NULL) {
        cout << head->data << "->";
        head = head->next;
    }
    cout << endl;
}

int main() {
    node *head = NULL;
    insertAtHead(head, 5);
    insertAtHead(head, 6);
    insertAtMiddle(head, 100, 2);
    printLL(head);
    return 0;
}
