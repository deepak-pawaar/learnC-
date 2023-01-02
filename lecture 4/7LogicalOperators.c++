/* C++ Logical Operators
&&(LOGICAL AND)     exp1 && exp2    (true true- true)
|| (LOGICAL OR)     exp1 || exp2    (false false - false)
!  (LOGICAL NOT)    !exp1           (true <-> false)
*/

#include <iostream>
using namespace std;

int main(){
    bool exp1=true;
    bool exp2=false;

    cout<< (exp1&&exp2) <<endl;  //false
    cout<< (exp1||exp2) <<endl; //true
    cout<< (!exp1)<<endl;       //false

    return 0;
}