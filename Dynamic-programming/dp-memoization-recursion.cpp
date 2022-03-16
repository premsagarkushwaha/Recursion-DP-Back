/* code */
#include <bits/stdc++.h>
using namespace std;

int fib(int n, int qb[]){
    if(n<=1)
    {
        return n;
    }
    else if(qb[n]!= -1)
    {
        return qb[n];
    }

    int p = fib(n-1,qb)+fib(n-2,qb);
    qb[n] = p;
    return p;
}

int main(){
    int n;
    cin>>n;
    int a[n+1];

    memset(a, -1, sizeof(a));
    cout<<fib(n,a)<<endl;
    return 0;
}
