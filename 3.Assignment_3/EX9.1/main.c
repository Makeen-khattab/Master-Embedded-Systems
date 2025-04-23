#include<stdio.h>
#define TRUE											(1)
#define FALSE											(0)
#define MAX_SIZE									   (100)
unsigned int lenStr(char*ptr2array_1);
void reverseStr(char*ptr2array_1);
int main()
{
	char str[MAX_SIZE];
	printf("Enter the string: ");
	fflush(stdout);
	gets(str);
	reverseStr(str);
	printf("Reverse of string is: %s",str);
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

void reverseStr(char*ptr2array_1)
{
	char*ptr_Beg=ptr2array_1;
	char*ptr_End= ptr2array_1+lenStr(ptr2array_1)-1;

	while((ptr_End-ptr_Beg)>0)
	{
		*ptr_End=*ptr_End+*ptr_Beg; /*The sum of Ascii of the two char*/
		*ptr_Beg=*ptr_End-*ptr_Beg; /*Put the Character which is at the end of the array to the begining of the array */
		*ptr_End=*ptr_End-*ptr_Beg;
		ptr_Beg++;
		ptr_End--;
	}


}




