#include"stdio.h"

void main()
{
	/* EX6: Program to Sum Natural Numbers */
	
	int i,num,sum=0;
	
	printf("Plz Enter Number \n");
	scanf("%d",&num);

	for(i=num;i>0; i--)
		sum+=i;
	
	printf("The Sum = %d \r\n",sum);
	
}