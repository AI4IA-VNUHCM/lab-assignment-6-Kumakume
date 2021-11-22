/*
5. Given a string containing just the characters '(', ')', '{', '}', '[' and ']',
determine if the input string is valid. The brackets must close in the correct order.
Ex:
 ________________________
| Input: "{([])}"        |
| Output: Valid!         |
| Input: "{[)}"          |
| Output: Invalid!       |
|________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex5(char *str){
	//Your codes here
	char stack[20];
	stack <char> s;
	int length = strlen(str);
    char top;
    for(int i = 0; i< length; i++){
        if(str[i] == '(' || str[i] == '{' || str[i] == '['){
            s.push(str[i]);
    }
    else
    { 
       if(s.empty()){
            cout<<input<<" contains invalid parentheses."<<endl;
            return;
    }
    else
	{
        top = s.top();
        if(input[i] == ')' && top == '(' || 
            input[i] == '}' && top == '{' ||
            input[i] == ']' && top == '[') 
		{
            s.pop();
		}
    }  
    else
	{
        cout<<input<<" contains invalid parentheses."<<endl;
        return;
    }

    if (s.empty())
    {
        cout<<input<<" contains valid parentheses."<<endl;
    }
    else
    {
        cout<<input<<" contains invalid parentheses."<<endl;
    }
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];

	Ex5(testcase);
	return 0;
}
