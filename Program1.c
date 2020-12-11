#include <stdio.h>

float MeasureTemp();
int AddFive(float Temp);

int main()
{
	float Temp = 0.0;
	Temp = MeasureTemp();
	Temp = AddFive(Temp);
	if (Temp <50) {
		printf("\nCold");
	} else {
		printf("\nHot");
	}
	return 0;
}

float MeasureTemp()
{
	return 23.6;
}


int AddFive(float Temp)
{
	Temp=Temp+5;
	return Temp;
}