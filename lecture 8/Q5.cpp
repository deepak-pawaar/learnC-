//Print the first n factorial /*
/*
n! = n*(n-1)*(n-2)......*1
n! = n*(n-1)!
*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int factorial=1;

    for(int i=1; i<=n; i++){

        factorial*=i;
        cout<<factorial<<endl;
    }

    return 0;
}

