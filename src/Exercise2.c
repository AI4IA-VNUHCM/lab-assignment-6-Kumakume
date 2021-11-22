/*
2. Receive n strings from the input and sort them ascendingly.
Ex:
 _________________________________________
| Input: one two three                    |
| Output: one three two                   |
|_________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex2(int n, char *str[])
{
	//Your codes here
	int order[n];

	for(int i = 0; i < n; i++)
		order[i] = i;

	for(int i = 0; i < n; i++)
		for(int j = i + 1; j < n; j++)
		{
			int a = 0;

			while(str[order[i]][a] != '\0')
			{
				if(str[order[i]][a] > str[order[j]][a])
				{
					int temp = order[i];
					order[i] = order[j];
					order[j] = temp;
					break;
				}else if(str[order[i]][a] == str[order[j]][a]) 	
					a++;
				else
					break;
			}
		}

	for(int i = 0; i < n; i++)
		printf("%s ", str[order[i]]);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	char *testcase[argc];
	int i;
	for(i=0; i<argc; i++){
		testcase[i] = argv[i+1];
	}
	
	Ex2(argc, testcase);
	
	return 0;
}
