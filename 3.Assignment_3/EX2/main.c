#include <stdio.h>
#define TRUE 									1
int main()
{ unsigned int counter=0;
double product=1,x;

		printf("Enter 4 numbers to have their product \n");

	do{
		printf("x%d = ",counter);
		fflush(stdout);
		scanf("%lf",&x);
		if(x==0)
		{
			continue;
		}
		else
		{
		counter ++;
		product*=x;
		}
	  }
	 while(counter<4);

	printf("Product of the 4 numbers = %.3lf",product);




}

