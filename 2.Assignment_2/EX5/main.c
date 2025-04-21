#include <stdio.h>
#define TRUE											(1)
#define FALSE											(0)
#define NUMBEROFVOWELS									(5)
#define A_SMALL										   ('a')
#define A_CAPITAL									   ('A')
#define Z_SMALL										   ('z')
#define Z_CAPITAL									   ('Z')
#define DIFFERENCEBETWEENLOWERANDUPPERCASE		(A_SMALL-A_CAPITAL)
#define TO_LOWER(X)			(((X>=A_CAPITAL) && (X<=Z_CAPITAL))?(X+DIFFERENCEBETWEENLOWERANDUPPERCASE):X)
#define ALPHABET(X)			(((X>=A_SMALL) && (X<=Z_SMALL))?(TRUE):(FALSE))

int main()
{
		char x;
		printf("Enter a character: ");
		fflush(stdout);
		scanf("%c",&x);

		if(ALPHABET(TO_LOWER(x))==TRUE)
		{
			printf("%c is an alphabet",x);
		}
		else
			printf("%c is not an alphabet",x);


}
