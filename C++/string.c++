#include<iostream>
#include<string>
using namespace std;
int main(){
    string firstName = "deepak";
    string lastName = "pawar";
    string fullName = firstName + lastName;
    cout << fullName;
    
    cout << "\nthe length of the name is: " << fullName.length();
    
    cout << fullName[0];

    string petName;
    cout << "Type your pet name: ";
    getline (cin, petName);
    cout << "Your name is " << petName;
    return 0;
}