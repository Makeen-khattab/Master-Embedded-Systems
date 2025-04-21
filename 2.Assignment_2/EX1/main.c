#include <stdio.h>
#define TRUE									1
#define FALSE									0
#define  CHECK_EVEN(X)				(((X%2)?(TRUE):(FALSE)))

int main()
{
	int x;

	printf("Enter an integer you want to check: ");
	fflush(stdout);
	scanf("%d",&x);

	if (CHECK_EVEN(x)==TRUE)
	{
		printf("%d is odd",x);

	}
	else
		printf("%d is even",x);



}
