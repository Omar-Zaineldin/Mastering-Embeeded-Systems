#include<stdio.h>
#include <stdlib.h>
void StoreMatrixElements(int a[][5],char Row,char Colum);
void PrintMatrixElements(int a[][5],char Row,char Colum);
void MatrixTranspose(int a[][5],char Row,char Colum);

void main(void)
{
	/*This Program Find Transpose Of Matrix*/
	
	int RowSize,ColumSize,i=0;
		
	printf("Plz Enter Row Size Of Array\n");
	fflush(stdin);
	scanf("%d",&RowSize);
	printf("Plz Enter Colum Size Of Array\n");
	fflush(stdin);
	scanf("%d",&ColumSize);
	int arr[RowSize][ColumSize];
	StoreMatrixElements(arr,RowSize,ColumSize);
	printf("Entered Matrix:\n");
	PrintMatrixElements(arr,RowSize,ColumSize);
	MatrixTranspose(arr,RowSize,ColumSize);
	printf("Transposed Matrix: \n");
	PrintMatrixElements(arr,RowSize,ColumSize);

	
}

void StoreMatrixElements(int a[][5],char Row,char Colum)
{

	for(char r=0;r<Row;r++)
	{
		/* this outer loop for rows*/
		for(char c=0;c<Colum;c++)
		{
			/* this inner loop for colums*/
			printf("Plz Enter a%d%d: ",r+1,c+1);
			fflush(stdout); fflush(stdin);
			scanf(" %d",&(a[r][c]));
		}
	}
}

void PrintMatrixElements(int a[][5],char Row, char Colum)
{
	/* this outer loop for rows*/
	for(char r=0;r<Row;r++)
	{
		/* this inner loop for colums*/
		for(char c=0;c<Colum;c++)
		{			
			printf(" %d\t",a[r][c]);
		}
		printf("\n");
	}	
}

void MatrixTranspose(int a[][5],char Row,char Colum)
{
	int temp;
	/* this outer loop for rows*/
	for(char r=0;r<Row;r++)
	{
		/* this inner loop for colums*/
		for(char c=r+1;c<Colum;c++)
		{
			temp=a[r][c];
			a[r][c]=a[c][r];
			a[c][r]=temp;
		}
	}
}