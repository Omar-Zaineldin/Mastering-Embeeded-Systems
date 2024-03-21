#include"stdio.h"

void main()
{
	/* EX7: Program to Find Factorial Of Integer Number */
	
	int ii,fact=1,num;
	
	printf("Plz Enter Integer Number \n");
	scanf("%d",&num);
	if (num<0)
		printf("Error!! Factorial Of Negative Numbers Doesn't Exist\r\n");
	else
	{
		for(ii=num;i>0; i--)
			fact*=ii;
	
		printf("The Factorial Of %d Is %d \n",num,fact);
	}
}