// Calculate the sum of all the elements in the given array.
#include <iostream>
using namespace std;

int main(){

    int num[]={3,4,10,11};
    int size = sizeof(num)/sizeof(num[0]);

    int sum=0;
    for(int i=0; i<size; i++){
        sum+=num[i];
    }
    cout<<sum<<endl;

    return 0;
}