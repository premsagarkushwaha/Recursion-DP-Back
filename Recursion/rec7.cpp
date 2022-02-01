/* Write a program in C to get the largest element of an array using recursion. Go to the editor
Test Data :
Input the number of elements to be stored in the array :5
Input 5 elements in the array :
element - 0 : 5
element - 1 : 10
element - 2 : 15
element - 3 : 20
element - 4 : 25
Expected Output :

Largest element of an array is: 25*/

#include<iostream>
using namespace std;
static int l = -999;
int highest(int a[],int n)
{
	
	if(n!=0)
	{
		if(l<a[n-1])
		{
			l=a[n-1];
			
		} 
		highest(a,n-1);
	}
	return l;
}

int main()
{
	int n;
	cout<<"enter size of array: ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cout<<"enter "<<i<<" element: ";
		cin>>arr[i];
	}
	cout<<"largest element is : "<<highest(arr,n);
}
