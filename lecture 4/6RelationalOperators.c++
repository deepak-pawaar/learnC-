/* 
== is equals to     exp1==exp2 ->true/False
! Not equals to     exp1!=exp2 ->true/false
> Greater Than      exp1>exp2  ->true/false
<
*/
#include <iostream>
using namespace std;

int main(){
    int num1=6;
    int num2=3;

    cout<<(num1==num2)<<endl;   //false
    cout<<(num1!=num2)<<endl;   //true
    cout<<(num1 >= num2)<<endl; //true

    return 0;

}