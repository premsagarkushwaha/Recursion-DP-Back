/* 10. Write a program in C to find the Factorial of a number using recursion. Go to the editor
Test Data :
Input a number : 5
Expected Output :

The Factorial of 5 is : 120*
update /

#include<iostream>
using namespace std;
int fact(int n)
{
	if(n==1){
		return 1;
		
	}
	else return n*fact(n-1);
}

int main()
{
	int name;
	cout<<"enter number to factorial : ";
	cin>>name;
	cout<<"Factorial: "<<fact(name);
}
