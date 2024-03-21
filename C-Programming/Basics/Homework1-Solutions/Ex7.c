#include"stdio.h"

void main()
{
	/* EX7: Program to Swap Two Integers Numbers Without Temp Variable */
	
	int x,y;
	
	printf("Plz Enter 2 Numbers \n");
	printf("Plz Enter the 1st Number \n");
	scanf("%d",&x);
	printf("Plz Enter the 2nd Number \n");
	scanf("%d",&y);
	
	x=x+y;
	y=x-y;
	x=x-y;
	
	printf("The 2 Number After Swapping \n");
	printf("The 1st Number= %d \n",x);
	printf("The 2nd Number= %d \r\n",y);
}