/*
logical-nad operator && (exp1 && exp2)
logical-or operator || (exp1 || exp2)
ternary operator -> short version of if else
*/
#include <iostream>
using namespace std;

int main(){
    int marks;
    cin>>marks;

    if(marks>33){
        cout<<"Pass"<<endl;
    }
    else{
        cout<<"Fail"<<endl;
    }
    //ternary operator
    marks>33 ? cout<<"Pass"<<endl : cout<<"Fail"<<endl;

    return 0;
}