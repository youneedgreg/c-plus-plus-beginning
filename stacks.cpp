#include <iostream>
#include <string>
using namespace std;

class StackX
{
private:
char myStack[10]; 
int top; //top of stack
public:
StackX()
{top=0;
}
	
void push(char j) //put item on top
{
myStack[++top] = j; //increment top,
} 

char pop() //take item from top
{
return myStack[top--]; //access item,
} //decrement top

char peek() //peek at top of stack
{
return myStack[top];
}
bool isEmpty() //true if stack is empty
{ return (top == 0); }
};
int main()
{
string input;
cout << "Enter string containing delimiters and no whitespace"<<endl;
cin >> input; 
if( input.length() == 1 ) //single item cannot be matched
return 0;

StackX theStack; //make stack

for(int j=0; j<input.length(); j++) //get chars in turn
{
char ch = input[j]; //get char
switch(ch)
{
case '<': //opening symbols
case '[':
case '(':
theStack.push(ch); //push them
break;
case '>': //closing symbols
case ']':
case ')':
if( !theStack.isEmpty() ) //if stack not empty,
{
char chx = theStack.pop(); //pop and check
if( (ch=='>' && chx!='<') ||(ch==']' && chx!='[') ||(ch==')' && chx!='(') )
{
cout << "Mismatched delimeter: "<< ch << " at char" << j << endl;
}}
break;
} //end switch
} //end for

return 0;} //end main()
