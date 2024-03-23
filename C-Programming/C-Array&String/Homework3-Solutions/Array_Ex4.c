#include<stdio.h>


void main(void)
{
	/*This Program to Insert an Element in Array*/
	
	int parray[30],arraysize,i,insertednumber,location;
		
	printf("Plz Enter no of Elements: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&arraysize);
	
	
	printf("Plz Enter Elements\n");
	for(i=0;i<arraysize;i++)
	{
		scanf("%d",&parray[i]);
	}
	printf("Plz Enter the Number you want to Insert: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&insertednumber);
	printf("Plz Enter the Location: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&location);
	for(i=arraysize;i>=location;i--)
		parray[i]=parray[i-1];
	
	parray[location-1]=insertednumber;
	printf("Elements after inserion\n");
	for(i=0;i<=arraysize;i++)
	{
		printf("%d ",parray[i]);
	}


	
}

