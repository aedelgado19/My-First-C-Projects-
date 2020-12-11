/*
	You're creating a contact manager app. It should print the info for 3 users. 
	Collect the phone number, name, email address for these users and print it out 
	when you have it. 
*/

#include <stdio.h>

int main()
{
int PhoneNumber;
char Name[20];
char Email[20];
char Answer [2];
int LoopCount;
	for (LoopCount=3; LoopCount>0; LoopCount--){
	printf("\nPhone number?");
	scanf("%d", &PhoneNumber);
	printf("Name?");
	scanf("%s", Name);
	printf("Email address?");
	scanf("%s", Email);
	printf("\nPhone number is %d, Name is %s, Email is %s", PhoneNumber, Name, Email);
	
}
	return 0;
}