#include <stdio.h>

int main()
{
int NewNum;
int NumOne;
int NumTwo;
int NumThree;

	printf("\nWhat is your first number?");
	scanf("%d", &NumOne);
	printf("\nWhat is your second number?");
	scanf("%d", &NumTwo);
	printf("What is your third number?");
	scanf("%d", &NumThree);

NewNum=NumOne+NumTwo+NumThree;
	printf("The sum is %d", NewNum);
	return 0;

}
