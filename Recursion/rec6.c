/* Write a program in C to find the sum of digits of a number using recursion. Go to the editor
Test Data :
Input any number to find sum of digits: 25
Expected Output :

The Sum of digits of 25 = 7 */

#include<stdio.h>

int callrec(int a)
{
	if(a==0)
	{
		return 0;
	}
	else return a%10+callrec(a/10);
}

int main()
{
	printf("enter any number between we need to print matural number: ");
	int d;
	scanf("%d",&d);
	printf("sum of digit %d",callrec(d));
	
	
}
