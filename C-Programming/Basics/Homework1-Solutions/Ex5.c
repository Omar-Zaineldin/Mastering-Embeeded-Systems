#include"stdio.h"

void main()
{
	/* EX5: Program to Find ASCII Value of a Character */
	char c;
	
	printf("Plz Enter Character \r\n");
	/*To clear input and output buffers*/
	fflush(stdout);  fflush(stdin);
	scanf("%c",&c);
	printf("ASCII value of %c In Decimal is = %d \r\n",c,c);
}