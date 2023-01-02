//Conversion of Decimal to Binary
/* 
Parity digit -> n/2 -> remainder
1 -> parity odd of n
0 -> parity even of n
*/
#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    int ans=0;
    int power=1;
    
    while(n>0){
        int paritydigit = n%2;
        ans+= paritydigit*power;
        power*=10;
        n/=2;
    }
    cout<<ans<<endl;

    return 0;
}