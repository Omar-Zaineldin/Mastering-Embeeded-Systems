#include"stdio.h"

void main()
{
	/* EX4: Program to Check Wither Number Positive Or Negative */
	float x;
	
	printf("Plz Enter Number You Want To Check \n");
	fflush(stdout);  fflush(stdin);
	scanf("%f",&x);
	if(x>=0)
		printf("%f Is Positive \r\n",x);
	else
		printf("%f Is Negative \r\n",x);

}