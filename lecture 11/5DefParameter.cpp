/*      Default Parameter Value
- it is a value in the function declaration automatically assigned 
by the compiler if the calling function does not pass any value
to that argument.       */

#include <iostream>
using namespace std;

int add(int a, int b=1, int c=2){
    return a+b+c;
}

int main(){

    cout<<add(2)<<endl;
    cout<<add(2,2)<<endl;
    cout<<add(2,2,3)<<endl;

    return 0;
}