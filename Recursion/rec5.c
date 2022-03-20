/* 
update
Write a program in C to count the digits of a given number using recursion. Go to the editor
Test Data :
Input a number : 50
Expected Output :

The number of digits in the number is :  2*/

#include<stdio.h>

int callrec(int a)
{
	if(a==0)
	{
		return 0;
	}
	else return 1+callrec(a/10);
}

int main()
{
	printf("enter any number between we need to print matural number: ");
	int d;
	scanf("%d",&d);
	printf("no. of digit %d",callrec(d));
	
	
}
