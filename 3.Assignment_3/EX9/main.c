#include<stdio.h>
#define TRUE											(1)
#define FALSE											(0)
#define MAX_SIZE									   (100)
unsigned int lenStr(char*ptr2array_1);
int main()
{
	char str[MAX_SIZE];
	printf("Enter a string: ");
	fflush(stdout);
	gets(str);
	printf("Length of string: %u",lenStr(str));
}
unsigned int lenStr(char*ptr2array_1)
{
	unsigned int i=0;
		while(ptr2array_1[i]!='\0')
		{
			++i;
		}

		return i;
}
