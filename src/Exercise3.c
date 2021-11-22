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
   int StrLength = length(str);
   int startIndex = 0, endIndex = 0;
   int minLength = StrLength, maxLength = 0, currentLength;
   char smallest, largest;
   while (endIndex <= StrLength){
      if (str[endIndex] != '\0' && str[endIndex] != ' ')
         endIndex++;
      else{
         currentLength = endIndex - startIndex;
         if (currentLength < minLength){
            smallest = substr(str, startIndex, currentLength);
            minLength = currentLength;
         }
         if (currentLength > maxLength){
            largest = substr(str, startIndex, currentLength);
            maxLength = currentLength;
         }
         endIndex++;
         startIndex = endIndex;
      }
   }
   printf("Shortest word: %s",smallest);
   printf("Longest word: %s",largest);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];
	
	Ex3(testcase);
	
	return 0;
}
