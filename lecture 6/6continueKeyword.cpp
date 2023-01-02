//skips a particular iteration
/*
int i=1
while(i<6){
    if(i==3)
    continue;
    cout<<i;
}
*/
//print all the values between 1 and 50 except for the multiples of 3.
#include<iostream>
using namespace std;
int main(){
    
    for(int i=0; i<=50; i++){
        if(i%3==0){
        continue;
    }   
        cout<<i<<endl;
    }

    return 0;
}