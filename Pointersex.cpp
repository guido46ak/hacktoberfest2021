//----NOTES----//


//pointer is data type which holds add. of other datatypes

// & --> add. of operator
// * --> (value at)represntation of operator



//----CODES----//

#include<iostream>
using namespace std;

int main(){
	
	int a=3;
	int* b;
	b=&a;
	
	//both at 22&233 provides same o/p
	cout<<"The address of a is "<<&a<<endl; 
	cout<<"The address of a is "<<b<<endl;
	
	cout<<"The value at address b is "<<*b<<endl;
	
	
	//  "**" --> The pointer(c) that stores the address of other pointer(b)
	int** c = &b;
	
	cout<<"The address of b is "<<&b<<endl; 
	cout<<"The address of b is "<<c<<endl;
	
	cout<<"The value at address c is "<<**c<<endl;

	
	return 0;
}
