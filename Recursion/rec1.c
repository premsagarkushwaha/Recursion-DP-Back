/*Write a program in C to print first 50 natural numbers using recursion.*/


// solution---------------------------------------------------------------
// this first recursion for practice

#include<stdio.h>

void callrec(int a)
{
	if(a<=50)
	{
		printf("%d ",a);
		callrec(a+1);
	}
	else
	{
		return;
	}
}

int main()
{
	printf("enter any number between we need to print matural number: ");
	int d;
	scanf("%d",&d);
	printf("natural number are : \n");
	callrec(d);
}
