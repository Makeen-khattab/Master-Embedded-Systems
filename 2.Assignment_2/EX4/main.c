#include <stdio.h>
#define TRUE									1
#define FALSE									0
#define  CHECK_POSITIVE(X)				(((X>0)?(TRUE):(FALSE)))
#define CHECK_ZERO(X)					(((X==0)?(TRUE):(FALSE)))
int main()
{
	float x;

	printf("Enter a number: ");
	fflush(stdout);
	scanf("%f",&x);

	if(CHECK_POSITIVE(x))
	{
		printf("%.2f is positive",x);
	}
	else if(CHECK_ZERO(x))
	{
	printf("You entered zero");
	}
	else
		printf("%.2f is negative",x);



}
