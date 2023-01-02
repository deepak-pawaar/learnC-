//Two number a and b. Find a raise to the power b.
/*
a to the power b = a*a*a*a*a*a..... b times
loop 1 to b
result*=a
*/

#include <iostream>
using namespace std;

int main(){

    int a,n;
    cin>>a>>n;

    int result=1;

    for(int i=1; i<=n; i++){
        result*=a;
    }
    cout<<result<<endl;

    return 0;
}