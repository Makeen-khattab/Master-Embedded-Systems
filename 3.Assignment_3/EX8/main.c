/*
 * Frequency Array will be used in this code implementation
 *
 *
 */
#define TRUE											(1)
#define FALSE											(0)
#define MAX_SIZE									   (100)
#define OFFSET									 	   ('a')
#define FREQARRSIZE									(('z')-('a'))
#define A_SMALL										   ('a')
#define A_CAPITAL									   ('A')
#define Z_SMALL										   ('z')
#define Z_CAPITAL									   ('Z')
#define DIFFERENCEBETWEENLOWERANDUPPERCASE		(A_SMALL-A_CAPITAL)
#define TO_LOWER(X)			(((X>=A_CAPITAL) && (X<=Z_CAPITAL))?(X+DIFFERENCEBETWEENLOWERANDUPPERCASE):X)
#define ALPHABET(X)			(((X>=A_SMALL) && (X<=Z_SMALL))?(TRUE):(FALSE))
#include <stdio.h>
void freqOfChars(char*ptr2array_1,char*ptr2Freq);
int main()
{
	char str[MAX_SIZE],freq[FREQARRSIZE]={0},c;
	printf("Enter a string: ");
	fflush(stdout);
	gets(str);
	printf("\n");
	printf("Enter a character to find its frequency: ");
	fflush(stdout);
	scanf("%c",&c);
	printf("\n");
	freqOfChars(str,freq);
	printf("Frequency of %c = %d",c,freq[c-OFFSET]);


	}

void freqOfChars(char*ptr2array_1,char*ptr2Freq)
{
	unsigned int i=0;
	while(ptr2array_1[i]!=0)
	{
		if(ALPHABET(TO_LOWER(ptr2array_1[i])) == TRUE)
		{
			ptr2Freq[TO_LOWER(ptr2array_1[i])-OFFSET]++;
		}

		++i;
	}

}

