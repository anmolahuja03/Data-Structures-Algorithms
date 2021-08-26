#include <iostream>
#include <queue>
using namespace std;

int main() 
{ 
    //Push works as enqueue : adds an item at the end of the queue
    //Pop works as dequeue : Removes the first item which was inserted first
    queue <int> q; 
    q.push(10); 
    q.push(20); 
    q.push(30); 
  
    cout << q.size() << endl;     //3
    cout << q.front() << endl;    //10
    cout << q.back() << endl;     //30
    q.pop();
    cout << q.front() << endl;    //20
    
    //Traversing
    while(q.empty() == false) {
       cout << q.front() << " " << q.back() << endl;
       q.pop();
   }
   
    return 0; 
} 