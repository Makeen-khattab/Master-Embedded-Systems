#include <stdio.h>
#define NUMBEROFVOWELS									(5)
#define A_SMALL										   ('a')
#define A_CAPITAL									   ('A')
#define Z_SMALL										   ('z')
#define Z_CAPITAL									   ('Z')
#define DIFFERENCEBETWEENLOWERANDUPPERCASE		(A_SMALL-A_CAPITAL)
#define TO_LOWER(X)			(((X>=A_CAPITAL) && (X<=Z_CAPITAL))?(X+DIFFERENCEBETWEENLOWERANDUPPERCASE):X)

int main()
{
		char Vowels[NUMBEROFVOWELS]={'a','e','i','o','u'},i,x;
		printf("Enter an alphabet: ");
		fflush(stdout);
		scanf("%c",&x);

for(i=0;i<NUMBEROFVOWELS;++i)
{

	if(TO_LOWER(x)== Vowels[i])
	{
		printf("%c is a vowel",x);
		break;
	}

}

if (i==NUMBEROFVOWELS)
{
	printf("%c is a consonant",x);
}

}
