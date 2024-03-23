#include<stdio.h>
#include <stdlib.h>

void main(void)
{
	/*This Program to Search an Element in Array*/
	
	int* parray,arraysize,i,insertednumber,location=-1;
		
	printf("Plz Enter no of Elements: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&arraysize);
	parray=malloc(arraysize*sizeof(int));
	
	if(parray!=NULL)
	{
		printf("Plz Enter Elements\n");
		for(i=0;i<arraysize;i++)
		{
			scanf("%d",&parray[i]);
		}
		printf("Plz Enter the Number to be Searched: ");
		fflush(stdin);fflush(stdout);
		scanf("%d",&insertednumber);


		for(i=0;i<arraysize;i++)
		{
			if(parray[i]==insertednumber)
			{
				location=i+1;
				break;
			}	
		}
		
		(location==-1)?	printf("Number not found\n"):printf("Number founded at location %d\n",i+1);

	}
	else
		printf("Sorry There is no storage size avialble\n");
	
}

