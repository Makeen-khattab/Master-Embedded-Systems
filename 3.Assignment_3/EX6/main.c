#include <stdio.h>
#define MAXSIZE							100
#define NUM_ELEM_INS					 1
#define MINSIZE							 1
void arrayEnteries(double*ptr2array,unsigned int*size,char arrayName);
void replaceElement(double*ptr2array,unsigned int size);
void insertElement(double*ptr2array,unsigned int size);
void copyElementsBetween2Arrays(double*ptr2array_1,double*ptr2array_2,unsigned int size);
void dispArray(double*ptr22nddim,unsigned size);


int main()
{
	unsigned int size;
	double arr[MAXSIZE+NUM_ELEM_INS];
	arrayEnteries(arr, &size,'a');
	insertElement(arr, size);
	dispArray(arr,size+NUM_ELEM_INS);
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

void replaceElement(double*ptr2array,unsigned int size)
{
	unsigned int index;
	double elem;
	printf("Enter the element to be replaced : ");
	fflush(stdout);
	scanf("%lf",&elem);
	printf("\n");

	printf("Enter the Location: ");
	fflush(stdout);
	scanf("%u",&index);
	printf("\n");


	if( index<MINSIZE||index>MAXSIZE)
	{

		printf("Invalid Location");

	}
	else
		ptr2array[index-1]=elem;

}

void copyElementsBetween2Arrays(double*ptr2array_1,double*ptr2array_2,unsigned int size)
{
	unsigned int i;

	for(i=0;i<size;++i)
	{
		ptr2array_1[i]=ptr2array_2[i];
	}

}

void insertElement(double*ptr2array,unsigned int size)
{
	unsigned int index,arrow_1,arrow_2;
	double arr[MAXSIZE+NUM_ELEM_INS];

		double elem;
		printf("Enter the element to be inserted : ");
		fflush(stdout);
		scanf("%lf",&elem);
		printf("\n");

		printf("Enter the Location: ");
		fflush(stdout);
		scanf("%u",&index);
		printf("\n");


		if( index<MINSIZE||index>MAXSIZE)
		{

			printf("Invalid Location");

		}
		else
		{
			for(arrow_2=0,arrow_1=0;arrow_2<size+NUM_ELEM_INS;arrow_2++)
			{
				if(index==arrow_2+1)
				{
					arr[arrow_2]=elem;

				}
				else
				{
					arr[arrow_2]=ptr2array[arrow_1];
				arrow_1++;
				}

			}

		}


	copyElementsBetween2Arrays(ptr2array,arr,size+NUM_ELEM_INS);
}

void dispArray(double*ptr22nddim,unsigned size)
{
	unsigned int counter;
	for(counter=0;counter<size;counter++)
	{
	    printf("%.0lf ",ptr22nddim[counter]);
	}
}




