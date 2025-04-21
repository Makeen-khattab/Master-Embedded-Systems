#include <stdio.h>
#define  MAX(X,Y)				(((X>Y)?(X):(Y)))

int main()
{
	float x,y,z;

	printf("Enter three numbers: ");
	fflush(stdout);
	scanf("%f %f %f",&x,&y,&z);

	printf("Largest number = %.2f",MAX(MAX(x,y),z));

}
