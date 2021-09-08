/*
@author Anmol Ahuja
Reference : https://practice.geeksforgeeks.org/problems/segregate-even-and-odd-nodes-in-a-linked-list5035/1#
*/

// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
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
class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
            Node *odd = NULL;
            Node *even = NULL;
            Node *curr_odd = NULL;
            Node *curr_even = NULL;
            
            Node *curr = head;
            
            while(curr != NULL) {
                if(curr->data % 2 != 0) {
                    if(odd == NULL) {
                        odd = curr;
                        curr_odd = curr;
                    }
                    else {
                        curr_odd->next = curr;
                        curr_odd = curr_odd->next;
                    }
                }
                else {
                    if(even == NULL) {
                        even = curr;
                        curr_even = even;
                    }
                    else {
                        curr_even->next = curr;
                        curr_even = curr_even->next;
                    }
                }
                curr = curr->next;
            }
            
            if(even)
            curr_even->next = odd;
            
            if(curr_odd) 
            curr_odd->next = NULL;
            
            if(even) return even;
            else 
            return odd;
    }
};

// { Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}
  // } Driver Code Ends