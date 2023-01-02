/*
if(condition-1){
    if(condition-2){
        //code
    }else{
        //code
    }
} else{
    //code
}
*/
#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter your marks: "<<endl;
    cin>>marks;

    if(marks>33){
        if(marks>80){
            cout<<"Gracefully Pass";
        }else{
            cout<<"Pass";
        }
    }
    else{
        cout<<"fail";
    }

    return 0;
}