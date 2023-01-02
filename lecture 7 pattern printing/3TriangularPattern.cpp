/*
*
**
***
****

rows, n=4
rows 1 to n
columns 1 to row_no.
*/
#include <iostream>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    
    for (int i = 0; i <=n ; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
}