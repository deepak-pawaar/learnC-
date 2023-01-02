#include <iostream>
using namespace std;

void makeTwice(int p){
    p = p*2;
    cout<<p<<endl;
}

int main(){
    int p = 24;
    makeTwice(p);
    cout<<p<<endl;
}

// Pass by value