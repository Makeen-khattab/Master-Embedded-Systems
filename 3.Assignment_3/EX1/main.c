#include <stdio.h>
#define TRUE 									1
int main()
{ unsigned int counter=0;
double av=0,x;

	while(TRUE)
	{
		printf("Enter the set of positive integers you want to have their average: ");
		fflush(stdout);
		scanf("%lf",&x);
		if(x<0)
		{
			break;
		}
		else
		{
			av+=x;
		counter++;
		}
	}
	if(counter!=0)
	{

		printf("Average= %.2lf",av/counter);
	}
	else
		printf("You entered a negative number");




}

