/*  Write a program in C to reverse a string using recursion. Go to the editor
Test Data :
Input any string: w3resource
Expected Output :

The reversed string is: ecruoser3w   */

#include<iostream>
using namespace std;
void reverse(string n,int l)
{
	if(l!=0)
	{
		cout<<n[l-1];
		reverse(n,l-1);
	}
	return;
}

int main()
{
	string name;
	cout<<"enter any string to reverse: ";
	cin>>name;
	reverse(name,name.length());
}
