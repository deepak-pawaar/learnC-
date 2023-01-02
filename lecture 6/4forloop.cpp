/*
For loop
for(init-statement; condition; final-espression){
    //code
}
*/
#include<iostream>
using namespace std;
int main(){
    
    int n;
    cin>>n;

    int sum=0;
    for(int i=0; i<=n; i++){
        sum+=i;
    }
    cout<<sum<<endl;

    return 0;
}

/* for loop vs while loop 
