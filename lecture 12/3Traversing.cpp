//Traversing through the Array
#include <iostream>
using namespace std;

int main(){

    int array[]={1,2,3,4};
    
    int size = sizeof(array)/sizeof(array[0]);

    for(int idx=0; idx<size; idx++){
        cout<<array[idx]<<endl;
    }

    //for each loop
    for(int ele:array){
        cout<<ele<<endl;
    }

    //while loop
    int index=0;
    while(index<size){
        cout<<array[index]<<endl;
        index++;
    }

    return 0;
}

/*  for each loop
for(datatype variable: array){          //variable is not index it is value

}
*/