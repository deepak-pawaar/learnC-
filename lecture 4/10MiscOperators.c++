/*
Size of Operators      sizeof(a)
condition?Expression1:Expression2       4==5 int a; a=4:a=5
comma operator  int y=4,3,6;
Dot and arrow Operator      . classe  -> pointers
casting Operator        float b=3.44, int b-> 3
& Address Operator      &a
* Pointer Operator      *a, P = *a
*/
#include <iostream>
using namespace std;
int main(){
    int a = 4;
    cout<<sizeof(a)<<endl;    //4
    
    char name ='a';
    cout<<sizeof(name)<<endl;    //1
    
    bool flag;
    a==name? flag = true : flag=false;
    cout<<flag<<endl;   //0

    cout<<(&a)<<endl;

    return 0;
}