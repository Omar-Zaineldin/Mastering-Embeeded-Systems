#include"stdio.h"

void main()
{
	/* EX5: Program to Check The Alphapet Is Character Or Not */
	char alphapet;
	
	printf("Plz Enter Character \n");
	fflush(stdout);  fflush(stdin);
	scanf("%c",&alphapet);
	/*From ASCII table A--Z are equals 65--90 in decimal , a--z are equals 97--122 in decimal*/
	if ((alphapet>=65 && alphapet<=90) || (alphapet>=97 && alphapet<=122))
	printf("%c Is Alphapet Character \r\n",alphapet);
	else printf("%c Is Not Alphapet Character \r\n",alphapet);

	
}