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
	
	int len = strlen(str);

	for (int i = len / 2 - 1, j = len / 2; i >= 0, j < len; i--, j++)
	{
		if ((str[i] == '{' && str[j] == '}') || (str[i] == '[' && str[j] == ']') || (str[i] == '(' && str[j] == ')'))
		{
			continue;
		}
		else
		{
			printf("Invalid!");
			return;
		}
	}
	printf("Valid!");
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];

	Ex5(testcase);
	return 0;
}
