/*  Switch Case
switch(expression){
    case x:
        //code
        break;
    case y:
        //code
        break;
    defaut:
        //code
}
write a program to print the day based on the day number.*/
#include <iostream>
using namespace std;

int main(){

    int day;
    cin>>day;

    switch(day){
        case 1:
        cout<<"Monday"<<endl;
        break;

        case 2:
        cout<<"Tuesday"<<endl;
        break;

        case 3:
        cout<<"Wednesday"<<endl;
        break;

        case 4:
        cout<<"thursday"<<endl;
        break;

        case 5:
        cout<<"friday"<<endl;
        break;

        case 6:
        cout<<"saturday"<<endl;
        break;

        case 7:
        cout<<"sunday"<<endl;
        break;

        default:
        cout<<"Please enter valid number";
    }
    return 0;
}