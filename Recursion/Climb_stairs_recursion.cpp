#include <iostream>
using namespace std;

int cs(int n){
    if(n==0) return 1;
    else if(n<0) return 0;
    int n1 = cs(n-1);
    int n2 = cs(n-2);
    int n3 = cs(n-3);
    int tc = n1+n2+n3;

    return tc;

}

int main(){
    int n;
    cin>>n;
    cout<<cs(n)<<endl;
}
