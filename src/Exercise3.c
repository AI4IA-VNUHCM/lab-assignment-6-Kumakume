/*
3. Receive a string, find the shortest and longest word in that string.
Ex:
 __________________________________________________________
| Input: "This is a string with shortest and longest word" |
| Output: Shortest word: a                                 |
|         Longest word: shortest                           |
|__________________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex3(char *str){
	//Your codes here
	//int string[] = &str;
	int i = 0, letters = 0, longest = 0, shortest = 0;

start:

    for (; str[i] !=' '; i++) {
        letters++;  
    }

    if (letters >= longest)
        longest = letters;
    /*if (letters <= shortest) 
	    shortest = letters;*/
    if (str[i] == ' ') {
        letters = 0;
        i++;
        goto start;
    }
	//printf("Shortest word: %d",shortest);
    printf("Longest word: %d",longest);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];
	
	Ex3(testcase);
	
	return 0;
}
