/* Write a program in C to calculate the sum of numbers from 1 to n using recursion*/
#include<stdio.h>

int calculate(int n)
{
	if(n==1)
	{
		return 1;
	}
	else 
	{
		return n+calculate(n-1);
	}
	
}
int main()
{
	int sum = calculate(5);
	printf("%d",sum);
}
