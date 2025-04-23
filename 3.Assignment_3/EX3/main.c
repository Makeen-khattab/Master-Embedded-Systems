#include <stdio.h>

#define ROW 									2
#define COL										2

void matrixEnteries(double(*ptr22nddim)[COL],char*ptr2str,char arrayName);
void add2Matrices(double(*ptra_22nddim)[COL],double(*ptrb_22nddim2)[COL],double(*ptrc_22nddim2)[COL]);
void dispMatrix(double(*ptr22nddim)[COL]);
int main()
{
	double a[ROW][COL],b[ROW][COL],c[ROW][COL];
	matrixEnteries(a, "1st matrix", 'a');
	matrixEnteries(b, "2nd matrix", 'b');
	add2Matrices(a,b,c);
	printf("Sum of Matrix: \n");
	dispMatrix(c);
}

void matrixEnteries(double(*ptr22nddim)[COL],char*ptr2str,char arrayName)
{
	int i,j;

	printf("Enter the elements of %s \n",ptr2str);
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			printf("Enter %c%d%d ",arrayName,(i+1),(j+1));
			fflush(stdout);
			scanf("%lf",&ptr22nddim[i][j]);
		}
	}



}
void add2Matrices(double(*ptra_22nddim)[COL],double(*ptrb_22nddim)[COL],double(*ptrc_22nddim)[COL])
{
	int i,j;
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			ptrc_22nddim[i][j]=ptra_22nddim[i][j]+ptrb_22nddim[i][j];
		}
	}

}

void dispMatrix(double(*ptr22nddim)[COL])
{
	int i,j;
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			printf("%.1lf ",ptr22nddim[i][j]);
		}
		printf("\n");
	}

}


