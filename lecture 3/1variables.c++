/* synatax for declaring a c++ variable
type variable_name[=value];
int apples = 4;
int a=3; or int a;
a=5;
naming convention
lowercase-teacontainer uppercase-TEACONTAINER camelcase-TeaContainer
Rules for namein variables in C++
rule 1- variable names should not begin with a number.
rule 2 - whitespace is not permitted in variable names.
rule 3 - A C++ keyword (reserved word) connot be used as a variable name.
rule 4 - it is preferred to use vaible names with more than one word with all lowecase letters for the first word and capitalization of the first letter of each subsequent word.
rule 5 - when creating varibales, it is preferred to give them meaningful names.
rule 6 - All lowercase letters should be used when creating one-word variable names.

C++ identifiers
names of class variables, methods
points to remember about identifiers
rule 1 - All identifires should begin with a letter (A  toZ or a to z), currency character($) or an underscor(_).
rule 2 - After the first character, identifierscan have any conbination of characters.
rule 3 - A keyword cannote be used as an identifier.
rule 4 - The identifiers are case sensitive.
rule 5 - whitespace are not permitted.
Examples of legel and illegal identifiers:
not allowed
2_abc
*Tea
allowed
_2abc
$Tea        

C++ Data Types

primary         Derived         user defined
integer         function        Class
Character       Array           Structure
Boolean         Pointer         Union
Floating Point  Reference       Enum
Double floatin point            TypeDef
void
wide charcter

interger Data Type
int a = 3;
4 bytes in memory
1 byte = 8 bits
bit = smallest unit of storage
0, 1
character Data Type
char name = 'a';
1 byte
boolean Data Type 
true , false
bool flag = ture/flase;
1 byte
floating point Data Type
decimals, exponentials
float Rate = 5.34
7 decimal places are allowed
4 bytes
Double floating point Data Type
double rate 5.7648549298
15 decimal places allowed 
8 bytes
void Data Type
null or nothing 
void functionname(){
    return;
}
wide character Data Type char = 2 byte
wchar = 2 bytes
string Data Type
for storing sequence of charater
string name = "urvi";
dynamically memory allocated


 Taking input from user
 int apples;
 Cin >> apples;     */
#include <iostream>
using namespace std;

int main(){
    int apples;
    cin >> apples;
    cout <<"Number of apples: " <<apples << endl;
    return 0;
}


