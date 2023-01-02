// Count the number of digits for a given number n

#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    int digits = 0;
    while (n>0)
    {
        digits++; //1
        n=n/10;  //
    }

    cout<<digits<<endl;

    return 0;
    
}