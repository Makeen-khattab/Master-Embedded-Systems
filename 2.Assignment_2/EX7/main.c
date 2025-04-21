#include <stdio.h>
long long factorial(int x);
#define ZERO 							0
int main()
{
	int x;

	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&x);

	if(x<ZERO)
	{
		printf("Error!!! Factorial of negative number doesn't exist");
	}
	else
		printf("Factorial of %d = %lld",x,factorial(x));



}

long long factorial(int x)
{
	if (x==0)
	{
		return 1;
	}
	else
		return x*factorial(x-1);

}
