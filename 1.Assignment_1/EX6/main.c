#include "stdio.h"
void swap(float*a,float*b);
int main()
{
	float a,b;
printf("Enter value of a: ");
fflush(stdout);
scanf("%f",&a);
printf("Enter value of b: ");
fflush(stdout);
scanf("%f",&b);
swap(&a,&b);
printf("After swapping, value of a = %.2f \r\n",a);
printf("After swapping, value of b = %.2f",b);

}

void swap(float*a,float*b)
{
	float med;
	med=*a;
	*a=*b;
	*b=med;

}
