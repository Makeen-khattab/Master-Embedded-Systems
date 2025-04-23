#include "stdio.h"

int main()
{
	unsigned int n,counter;
	double ip,av=0;

	printf("Enter the numbers of data: ");
	fflush(stdout);
	scanf("%u",&n);
	printf("\n");

	for(counter=0;counter<n;counter++)
	{
		printf("%u. Enter number: ",counter+1);
		fflush(stdout);
		scanf("%lf",&ip);
		printf("\n");
		av+=ip;
	}
	printf("Average = %.2lf",(av/counter));




}
