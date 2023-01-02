// C++ Functions
/*   checlist
why are functions important in C++?
how to declare functions:
call a funtion

functions-
logical set of code
performs a specific task
passing input called parameters

int main(){

    return 0;
}
int main() is also a function call every time we run
our C++ program
(that function performs some task on input and return us
output called return type of that data type.)

why are Functions important in C++
->reusability
->DRY principle(Don't Repeat Yourself)
->easy to read

Types of Funtions:
-User defined functions:
-Standard Library funtions: built in function ready to use

How to declare Functions:

return_type funtion_name(parameter1, parameter2...){
    statements;
}

1. Function name 
the function name should depict functionality

2. Return type 
return means what is returning
return 0; means return integer
return sum means return sum

3. Parameters
function(parameter1, parameter2,.....)
int add(int num1, int num2){

}

int add(int num1, int num2)
int add(int num1, int num2, int num3)
float add(float num1, float num2) 

4. Function Body
_____________________{
    //code
    return;
}

Call a Function:
To call a function in C++, you have to write the function's 
name followed by two parentheses () and a semicolon;

int add(int num1, int num2){
    _________
}
int main(){
    add(2,3)
}

***function should be defined above the main function.


Call a Function:
void welcome(){
    cout<<("welcome to Physics Wallah");
}

int main(){
    welcome();
}

Function Prototype
if we want to define a function after the function 
call, we need to use the function prototype.

int add(int, int);          //prototype

int main(){
    add()
}

standard library Functions
- pow(a,b)
sqrt(a)