/*
1. Receive a maximum 4-digit integer n. Write a program to read the number n.
 ________________________________________________
| Input: 1234                                    |
| Output: one thousand two hundred thirty four   |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex1(int n){
	//Your code
	while(n!=0)
	{
		if(n>=9000)
	    {
			printf("nine thousand ");
			n -= 9000;
		}
		else if(n>=8000)
	    {
			printf("eight thousand ");
			n -= 8000;
		}
		else if(n>=7000)
	    {
			printf("seven thousand ");
			n -= 7000;
		}
		else if(n>=6000)
	    {
			printf("six thousand ");
			n -= 6000;
		}
		else if(n>=5000)
	    {
			printf("five thousand ");
			n -= 5000;
		}
		else if(n>=4000)
	    {
			printf("four thousand ");
			n -= 4000;
		}
		else if(n>=3000)
	    {
			printf("three thousand ");
			n -= 3000;
		}
		else if(n>=2000)
	    {
			printf("two thousand ");
			n -= 2000;
		}
		else if(n>=1000)
	    {
			printf("one thousand ");
			n -= 1000;
		}
		else if(n>=900)
		{
			printf("nine hundred ");
			n -= 900;
		}
		else if(n>=800)
		{
			printf("eight hundred ");
			n -= 800;
		}
		else if(n>=700)
		{
			printf("seven hundred ");
			n -= 700;
		}
		else if(n>=600)
		{
			printf("six hundred ");
			n -= 600;
		}
		else if(n>=500)
		{
			printf("five hundred ");
			n -= 500;
		}
		else if(n>=400)
		{
			printf("four hundred ");
			n -= 400;
		}
		else if(n>=300)
		{
			printf("three hundred ");
			n -= 300;
		}
		else if(n>=200)
		{
			printf("two hundred ");
			n -= 200;
		}
		else if(n>=100)
		{
			printf("one hundred ");
			n -= 100;
		}
		else if(n>=90)
		{
			printf("ninety ");
			n -= 90;
		}
		else if(n>=80)
		{
			printf("eighty ");
			n -= 80;
		}
		else if(n>=70)
		{
			printf("seventy ");
			n -= 70;
		}
		else if(n>=60)
		{
			printf("sixty ");
			n -= 60;
		}
		else if(n>=50)
		{
			printf("fifty ");
			n -= 50;
		}
		else if(n>=40)
		{
			printf("fourty ");
			n -= 40;
		}
		else if(n>=30)
		{
			printf("thirty ");
			n -= 30;
		}
		else if(n>=20)
		{
			printf("twenty ");
			n -= 20;
		}
		else if(n>=19)
		{
			printf("nineteen");
			n -= 19;
		}
		else if(n>=18)
		{
			printf("eighteen");
			n -= 18;
		}
		else if(n>=17)
		{
			printf("seventeen");
			n -= 17;
		}
		else if(n>=16)
		{
			printf("sixteen");
			n -= 16;
		}
		else if(n>=15)
		{
			printf("fifteen");
			n -= 15;
		}
		else if(n>=14)
		{
			printf("fourteen");
			n -= 14;
		}
		else if(n>=13)
		{
			printf("thirteen");
			n -= 13;
		}
		else if(n>=12)
		{
			printf("twelve");
			n -= 12;
		}
		else if(n>=11)
		{
			printf("eleven");
			n -= 11;
		}
		else if(n>=10)
		{
			printf("ten ");
			n -= 10;
		}
		else if(n>=9)
		{
			printf("nine");
			n -= 9;
		}
		else if(n>=8)
		{
			printf("eight");
			n -= 8;
		}
		else if(n>=7)
		{
			printf("seven");
			n -= 7;
		}
		else if(n>=6)
		{
			printf("six");
			n -= 6;
		}
		else if(n>=5)
		{
			printf("five");
			n -= 5;
		}
		else if(n>=4)
		{
			printf("four");
			n -= 4;
		}
		else if(n>=3)
		{
			printf("three");
			n -= 3;
		}
		else if(n>=2)
		{
			printf("two");
			n -= 2;
		}
		else if(n>=1)
		{
			printf("one");
			n -= 1;
		}
	}	
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	Ex1(testcase);
	
	return 0;
}
