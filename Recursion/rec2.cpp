/*Geek created a random series and given a name geek-onacci series. Given four integers A, B, C, N. A, B, C represents the first three numbers of geek-onacci series.
Find the Nth number of the series. The nth number of geek-onacci series is a sum of the last three numbers (summation of N-1th, N-2th, and N-3th geek-onacci numbers)

Input:
1. The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
2. The first line of each test case contains four space-separated integers A, B, C, and N.

Output: For each test case, print Nth geek-onacci number 
Example:
Input:
3
1 3 2 4
1 3 2 5
1 3 2 6

Output:
6
11
19

BELOW IS CODE
*/

#include <iostream>
using namespace std;

int onacci(int a, int b, int c,int n1)
{
    if(n1==1)
    {
        return a+b+c;
    }
    return onacci(b,c,a+b+c,n1-1);
}

int main() {
	int n;cin>>n;
	while(n--){
	    int a,b,c,n1;cin>>a>>b>>c>>n1;
	    cout<<onacci(a,b,c,n1-3)<<"\n";
	}
	return 0;
}
