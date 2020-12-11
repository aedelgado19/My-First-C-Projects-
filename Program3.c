// User input temp, add 3, print new temp 3 times
//
#include <stdio.h>

int Temp=0;
int AddThree(int Temp);

int main()
{

	printf("What is the temperature?");
	scanf("%d", &Temp);
Temp = AddThree(Temp);

for (Temp=7.0; Temp >10; Temp++){
	printf("Temp is %d", Temp);
}

return 0;
}



int AddThree(int Temp)
{
Temp = Temp+3;
return Temp;

}