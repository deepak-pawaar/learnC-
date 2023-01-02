#include <iostream>
using namespace std;

void temp(int p){
    int q = p;
    q = q - 100;
}

int main(){
    int p = 890;
    temp(p);
    cout<<(q);
}

// show error bcs q is variable of temp func