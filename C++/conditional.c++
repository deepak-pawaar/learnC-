#include<iostream>
using namespace std;
int main(){
    int x, y;
    cout << "Enter x: " <<"\n";
    cin >> x;
    cout << "Enter y: " <<"\n";
    cin >> y;
    if (x>y)
    {
        cout << "you entered x greater than y" <<"\n";
    }
    else{
        cout << "you entered y greater than x" <<"\n";
    }
}