#include <stdio.h>


int main()
{

int perimeter;
int area;
int width;
int length;


	printf("\nWhat is the width of the rectangle?");
	scanf("%d", &width);
	printf("What is the length of the rectangle?");
	scanf("%d", &length);
	
area=width*length;
perimeter=(2*width) + (2*length);

	printf("\nArea is %d, Perimeter is %d", area, perimeter);

return 0;
}

