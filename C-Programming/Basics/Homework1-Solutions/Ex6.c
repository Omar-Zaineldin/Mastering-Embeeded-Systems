#include"stdio.h"

void main()
{
	/* EX6: Program to Swap Two Integer Numbers */
	
	int x1,x2,temp;
	
	printf("Plz Enter 2 Numbers \n");
	printf("Plz Enter the 1st Number \n");
	scanf("%d",&x1);
	printf("Plz Enter the 2nd Number \n");
	scanf("%d",&x2);
	
	temp= x1;
	x1=x2;
	x2=temp;
	
	printf("The 2 Number After Swapping \n");
	printf("The 1st Number= %d \n",x1);
	printf("The 2nd Number= %d \r\n",x2);
}