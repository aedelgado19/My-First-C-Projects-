#include <stdio.h>

int Temp;
//float MeasureTemp(float Temp);
int AddTwo(int Temp);
int NewTemp;


int main()
{
	printf("Temp is?");
	scanf("%d", &Temp);
	printf("Given Temp is %d", Temp);
	
Temp=AddTwo(NewTemp);
	printf("New temp is %d", NewTemp);
//	scanf("%d", &NewTemp);

	printf("Temp is %d", Temp);
	return 0;

}


/*float MeasureTemp(float Temp)
{
return Temp;

}
*/
int AddTwo(int Temp)
{
NewTemp= Temp+2;
return NewTemp;
}