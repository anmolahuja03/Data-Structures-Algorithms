#include<bits/stdc++.h>
using namespace std;

//Dereferencing Operator (*) - for accessing the variable a pointer is pointing to
//use case - creating a pointer, dereference address, multiplication
// &Bucket  -> Address
// *Address -> Bucket

int main(){
	
	int x = 10;
	int y = 20;
	cout << &x << endl;
	int *p = &x;
	cout << p << endl;
	
	cout << *p << endl; //dereferencing operator
    cout << *(&x) << endl;
    
    cout << *(&p) << endl;
    cout << &(*p) << endl;
    
    cout << *(p) + 1 << endl;
    cout << *(p+1) << endl; //gives garbage value

    //Reassigning anther address to the variable
    p = &y;
    cout << p << endl;
    cout << *p << endl;
    cout << *(&y) << endl;
    cout << &p << endl;

    //Double Pointer
    int **pp = &p;
    cout << pp << endl;

    //It does not works for character variables
    char ch = 'A';
    //this will give o/p as A only instead of address
    //this happens because of operator overloading (<<) 
    cout << &ch << endl;
    //Explicit typecasting from char* to void*
    cout << (void *)&ch << endl;

}


/*
0x61ff08
0x61ff08
10
10
0x61ff08
0x61ff08
11
4201595
0x61ff04
20
20
0x61ff00
0x61ff00
A
0x61feff
[Finished in 3.0s]
*/
