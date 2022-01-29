/* Write a program in C to print Fibonacci Series using recursion.*/

#include<stdio.h>
void cal(int c, int n, int t)
{
	if(t==0)
	{
		return;
	}
	else
	{
		printf("%d ",c);
		cal(n,c+n,t-1);
	}
	
}
int main()
{
  int n=13;
	cal(1,1,n);

}
