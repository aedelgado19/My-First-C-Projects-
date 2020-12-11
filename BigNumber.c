//write a program that asks for three numbers and prints the largest

#include <stdio.h>



void main()
{
int NumberOne;
int NumberTwo;
int NumberThree;

	printf("What is your first number?");
	scanf("%d", &NumberOne);
	printf("What is your second number?");
	scanf("%d", &NumberTwo);
	printf("What is your third number?");
	scanf("%d", &NumberThree);
	
	if ((NumberOne>NumberTwo) && (NumberOne>NumberThree)){
	printf("The largest number is %d", NumberOne);
	}
	if ((NumberTwo>NumberOne) && (NumberTwo>NumberThree)) {
	printf("The largest number is %d", NumberTwo);
	}
	if ((NumberThree>NumberTwo) && (NumberThree>NumberOne)){
	printf("The largest number is %d", NumberThree);
	}
	

}
