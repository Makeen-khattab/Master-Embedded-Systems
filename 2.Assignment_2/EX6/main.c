#include <stdio.h>
#define  ARITHMETICSUM(X)				(((X/2.0)*(X+1)))

int main()
{
	int x;

	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&x);

	printf("Sum = %d",(int)ARITHMETICSUM(x));


}
