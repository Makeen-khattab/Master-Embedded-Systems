#include <stdio.h>
#define MAXSIZE							100
#define MINSIZE							 1
#define NOTFOUND						 0
void arrayEnteries(double*ptr2array,unsigned int*size,char arrayName);
void searchArray(double*ptr2array,unsigned size,double key,unsigned int*loc);
int main()
{
	unsigned int size,loc;
	double arr[MAXSIZE],key;
	arrayEnteries(arr, &size,'a');
	printf("Enter the element to be searched : ");
	fflush(stdout);
	scanf("%lf",&key);
	 searchArray(arr,size,key,&loc);
	 if(loc==NOTFOUND)
	 {
		 printf("Number wasn't found");
	 }
	 else
		 printf("Number found at location = %u",loc);
}

void arrayEnteries(double*ptr2array,unsigned int*size,char arrayName)
{
	unsigned int counter;
	do
	{
	printf("Enter the no of elements : ");
	fflush(stdout);
	scanf("%u",size);

	}while(((*size)<MINSIZE) ||((*size)>MAXSIZE));

	for(counter=0;counter<*(size);++counter)
	{
		printf("%c%u = ",arrayName,(counter+1));
		fflush(stdout);
		scanf("%lf",(ptr2array+counter));
	}

}


void dispArray(double*ptr22nddim,unsigned size)
{
	unsigned int counter;
	for(counter=0;counter<size;counter++)
	{
	    printf("%.0lf ",ptr22nddim[counter]);
	}
}

void searchArray(double*ptr2array,unsigned size,double key,unsigned int*loc)
{
	unsigned int i;
	*loc=0;
	for(i=0;i<size;++i)
	{
		if(ptr2array[i]==key)
		{
			*loc=i+1;
			break;
		}

	}

	return;
}


