#include"stdio.h"

void main()
{
	/* Ex1: Program to Check Even or Not */
	int num;
	
	printf("Plz Enter Number You Want To Check \n");
	scanf("%d",&num);
	
	/*Using ternary expression*/
	(num%2==0)?printf("%d Is Even \r\n",num):printf("%d Is Odd \r\n",num);	
}