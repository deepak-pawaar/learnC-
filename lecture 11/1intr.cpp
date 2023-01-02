/*
scope of variables in C++
function call by value 
function call by reference
Default parameter value     

Scope of variables in C++
variable -> data container - store some value during program excution
scope of variable -> 1.part of the program from where a variable is accessible
2.variable must have function scope
3.variables cannot have same name in a same function

type of variables
1. Local Variables
-These are the vaiables that are declared inside the function or block
int main(){

}
for(        ){
    int a=s;
}
2.Global Variables
These are the variables that exist throughout the whole program and
can be used in any part of the program.
int apples=5;
int main(){
    cout<<apples;
}
void print(){
    cout<<apples;
}

what if there exists a local vaiable with the same
name as that of the global variable inside a function?
int p = 5;
int main(){
    int p=7;
    cout<<p;        //7
    p++;
    cout<<p;        //8
    if we want to access global variable in main func
    scope resolution operator(2 colon)
    cout<<::p;      //5
}

void print (){
    cout<<p;        //5
}


Formal Parameters and Actual Parameters
void functionname(int parameter1, int parameter2){      //formal parameters
    //code
}
int main(){
    int a=1,b=2;
    functionname(a,b)   //actual parameter
}



Pass by Value and Pass by Reference
pass by value- parameter values are copied to another variables
pass by reference- parameter values are passed


Default Parameter Value
- it is a value in the function declaration automatically assigned 
by the compiler if the calling function does not pass any value
to that argument.