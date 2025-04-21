#include <stdio.h>
#define NUMBEROFOPERATIONS							4

double calculator(float x,float y,char op);

int main()
{
	float x,y;
	char op;
	printf("Enter operator either + or - or * or divide : ");
	fflush(stdout);
	scanf("%c",&op);

	printf("Enter two operands: ");
	fflush(stdout);
	scanf("%f %f",&x,&y);

	printf("%.1f %c %.1f = %.1lf",x,op,y,calculator(x,y,op));



}

double calculator(float x,float y,char op)
{

	switch (op)
	{
	case '+':
		return x+y;
		break;

	case '-':
			return x-y;
			break;
	case '*':
			return x*y;
			break;
	case '/':
			return x/y;
			break;

	default:
		;

	}

	return 0;


}
