#include <stdio.h>

int main()
{

	int NumberArray[10];
	int index = 0;
	char LastName[10] = "Delgado";
	char LastNameNew[10];
	int j=0;
	
	/*for (index = 0; index < 10; index++) {
		NumberArray[index] = index+5;
		printf("\nIn slot %d write value %d", index, NumberArray[index]);
	}	
	*/
	while (index<8){
	printf("\nIn slot %d write value %d", index, NumberArray[index]);
	index=index++;
	}
	
	for (index = 0; index < 8; index++) {
		printf("\n%c", LastName[index]);
	}
	
	printf("\nNew name:");
	for (index =1; index < 10; index+=2) {
		LastNameNew[j] = LastName[index];
		printf("%c", LastNameNew[j]);
		j++;

		
	}
	
    //char charArray[20];
/*int Num;

for (Num=4; Num<43; Num=Num+4){
	printf("\nNumber is %d", Num);
	}
	return 0;

}*/

}