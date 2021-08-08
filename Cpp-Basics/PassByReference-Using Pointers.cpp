//Understanding Pass By Reference Using pointers

#include<bits/stdc++.h>
using namespace std;

//Pass By Value 

//increment function creates a copy
//of a and all the changes (in this case
//a = a + 1 are made in this copy only).
//a becomes 11 and After exiting this function the particular
//memory gets destroyed
// void increment(int a){
// 	a = a + 1;
// 	cout << "Inside Increment Function : " << a << endl;
// }

// int main(){
// 	init_code();
// 	int a = 10;
// 	increment(a);
// 	cout << "Inside Main Function : " << a << endl;

// }


//Pass By Reference - Using Pointers

//Here, instead of creating a copy instead
//to get the address of a

//(int *a_ptr) is accepting the address of a
//int *a_ptr = &a
void increment(int *a_ptr){
	*a_ptr = *a_ptr + 1;
	cout << "Inside Increment Function : " << *a_ptr << endl;
}

int main(){
	int a = 10;
	//&a is sending the address of a
	increment(&a);
	cout << "Inside Main Function : " << a << endl;
}