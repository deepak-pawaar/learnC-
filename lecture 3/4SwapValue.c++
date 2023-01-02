#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout<< "Enter value of a: ";
    cin>>a;
    cout<< "Enter value of b: ";
    cin>>b;

    int c;
    c=a;
    a=b;
    b=c;

    cout<<"the value of a: "<<a <<endl;
    cout<<"the value of b: "<<b <<endl;

    return 0;
}