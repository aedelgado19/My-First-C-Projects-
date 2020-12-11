#include <stdio.h>

int main()
{
char Word[10]="Potato";
int index;

for (index=7; index>=0; index--){
	printf("\n%c", Word[index]);
}
return 0;
}