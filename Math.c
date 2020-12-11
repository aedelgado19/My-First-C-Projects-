#include <stdio.h>
#include <math.h>
#if 0
int main()
{	
 	char YourName[20];
 	int age =0;

/*
 	printf("\nEnter your name or else:");
 	scanf("%s", YourName);
 	printf("\nEnter your age or I will be mad:");
	scanf("%d", &age);
	
	printf("\nHi %s 2 to the 8  is %f", YourName, pow(2,8));
	printf("\nBy the way, you are %d years old ", age);
*/

	// Ask the user for two numbers and multiply them together and print out the result	
	
	
	return 0;	

}
#endif




#include <stdio.h>

int main()
{
	int NumberOne;
	int NumberTwo;
	int NumberThree;
		printf("What is your first number?");
		scanf("%d", &NumberOne);
		printf("What is your second number?");
		scanf("%d", &NumberTwo);
	NumberThree = NumberOne*NumberTwo;
		printf("Your new number is %d", NumberThree);
	return 0;


}