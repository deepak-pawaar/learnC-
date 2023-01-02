/*
   1
  121
 12321
1234321

rows 1 to n
columns
1 to (n-i)
or
increasing order(1 to i) or dec order(i-1 to 1) 
*/
#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-i); j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        for(int j=(i-1); j>=1; j--){
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}