#include<stdio.h>
#define RowSize 2
#define ColumSize 2
void StoreMatrixElements(float [][ColumSize]);
void PrintMatrixElements(float [][ColumSize]);
void SumColumSizeMatrix(float [][ColumSize],float [][ColumSize]);

void main(void)
{
	/* EX1: Sum of two matrix of order ColumSize*ColumSize */
	
	float matrix_a[RowSize][ColumSize],matrix_b[RowSize][ColumSize];
	
	printf("Plz Enter the elements of 1st matrix\n");
	StoreMatrixElements(matrix_a);
	printf("Plz Enter the elements of 2nd matrix\n");
	StoreMatrixElements(matrix_b);
	printf("The 1st Matrix \n");
	PrintMatrixElements(matrix_a);
	printf("The 2nd Matrix \n");
	PrintMatrixElements(matrix_b);
	printf("\n\n");
	SumColumSizeMatrix(matrix_a,matrix_b);
	printf("The Sum of 2 Matrix \n");
	PrintMatrixElements(matrix_a);
	
	
}

void StoreMatrixElements(float a[RowSize][ColumSize])
{
	/* this outer loop for rows*/
	for(char r=0;r<RowSize;r++)
	{
		/* this inner loop for colums*/
		for(char c=0;c<RowSize;c++)
		{
			printf("Plz Enter a%d%d: ",r+1,c+1);
			fflush(stdout); fflush(stdin);
			scanf("%f",&(a[r][c]));
		}
	}
}

void PrintMatrixElements(float a[RowSize][ColumSize])
{
	/* this outer loop for rows*/
	for(char r=0;r<RowSize;r++)
	{
		/* this inner loop for colums*/
		for(char c=0;c<ColumSize;c++)
		{
			
			printf(" %.2f\t",a[r][c]);
		}
		printf("\n");
	}	
}

void SumColumSizeMatrix(float a[][ColumSize],float b[][ColumSize])
{
	/* this outer loop for rows*/
	for(char r=0;r<RowSize;r++)
	{
		/* this inner loop for colums*/
		for(char c=0;c<ColumSize;c++)
		{
			a[r][c]+=b[r][c];
		}
	}
}
