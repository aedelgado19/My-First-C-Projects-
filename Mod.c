#include <stdio.h>

int main()
{
int index;
int num=100;

for (index=100; index>=0; index--){
	if (num % index==0)
		printf("\n%d", index);


}
return 0;
}