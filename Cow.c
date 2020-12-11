//print out a message only if a cow is not 10 years old.

#include <stdio.h>

int main()
{
	int CowAge=10;
	//if ((CowAge>10) || (CowAge<10)){
	if (CowAge!=10){
		printf("\nHola Hola Hola! Cow age is %d", CowAge);
	} 
	return 0;
}
