#include <stdio.h>

#define ROW 									25
#define COL										25

void matrixEnteries(double(*ptr22nddim)[COL],char*ptr2str,char arrayName,unsigned int row,unsigned int col);
void matrixTrans(double(*ptra_22nddim)[COL],double(*ptrb_22nddim)[COL],unsigned int row,unsigned int col);
void dispMatrix(double(*ptr22nddim)[COL],unsigned int row,unsigned int col);
int main()
{
	unsigned int row,col;
	printf("Enter rows and columns of matrix: ");
	fflush(stdout);
	scanf("%u %u",&row,&col);
	double a[ROW][COL],b[ROW][COL];
	matrixEnteries(a, "matrix", 'a',row,col);
	printf("Entered Matrix: \n");
	dispMatrix(a,row,col);
	printf("Transpose of Matrix: \n");
	matrixTrans(a,b,row,col);
	dispMatrix(b,col,row);
}

void matrixEnteries(double(*ptr22nddim)[COL],char*ptr2str,char arrayName,unsigned int row,unsigned int col)
{
	unsigned int i,j;

	printf("Enter the elements of %s \n",ptr2str);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter %c%d%d ",arrayName,(i+1),(j+1));
			fflush(stdout);
			scanf("%lf",&ptr22nddim[i][j]);
		}
	}



}
void matrixTrans(double(*ptra_22nddim)[COL],double(*ptrb_22nddim)[COL],unsigned int row,unsigned int col)
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{

			ptrb_22nddim[j][i]=ptra_22nddim[i][j];

		}
	}

}

void dispMatrix(double(*ptr22nddim)[COL],unsigned int row,unsigned int col)
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%.0lf ",ptr22nddim[i][j]);
		}
		printf("\n");
	}

}




