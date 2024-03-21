#include"stdio.h"

void main()
{
	/* EX3: Program to Find Largest Number Between 3 Numbers Entered by a User */
	float n1,n2,n3;
	
	printf("Plz Enter 3 Numbers \n");
	printf("Plz Enter 1st Number \n");
	fflush(stdout);  fflush(stdin);
	scanf("%f",&n1);
	printf("Plz Enter 2nd Number \n");
	fflush(stdout);  fflush(stdin);
	scanf("%f",&n2);
	printf("Plz Enter 3rd Number \n");
	fflush(stdout);  fflush(stdin);
	scanf("%f",&n3);
	
	if(n1>n2)
	{
		if(n1>n3)
			printf("The Largest Number Is %f \r\n",n1);
		else
			printf("The Largest Number Is %f \r\n",n3);
	}
	else 
	{
		if(n2>n3)
			printf("The Largest Number Is %f \r\n",n2);
		else
			printf("The Largest Number Is %f \r\n",n3);
	}

}