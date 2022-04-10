/*1. You are given a number n, representing the number of stairs in a staircase.
2. You are on the 0th step and are required to climb to the top.
3. In one move, you are allowed to climb 1, 2 or 3 stairs.
4. You are required to print the number of different paths via which you can climb to the top.

Constraints
0 <= n <= 20

Format
Input
A number n

Output
A number representing the number of ways to climb the stairs from 0 to top.

Example
Sample Input

4

Sample Output
update
7 */


#include <bits/stdc++.h>
using namespace std;

int cs(int n,int qb[]){
    if(n==0) return 1;
    else if(n<0) return 0;
    else if(qb[n]!=-1) return qb[n];
    int n1 = cs(n-1,qb);
    int n2 = cs(n-2,qb);
    int n3 = cs(n-3,qb);
    int tc = n1+n2+n3;
    qb[n] = tc;

    return tc;

}

int main(){
    int n;
    cin>>n;
    int a[n+1];
    memset(a,-1,sizeof(a));
    cout<<cs(n,a)<<endl;
}
