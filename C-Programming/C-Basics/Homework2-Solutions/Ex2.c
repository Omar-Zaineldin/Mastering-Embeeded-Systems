#include"stdio.h"

void main()
{
	/* EX2: Program to Check Character Vowel Or Constant */
	char c;
	
	printf("Plz Enter Character You Want To Check \r\n");
	fflush(stdout);  fflush(stdin);
	scanf("%c",&c);
	switch(c)
	{
		case 'a':
		case 'A':
		case 'E':
		case 'e':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
		       printf("%c Is Vowel Character \r\n",c);
		break;
		
		default: 
				printf("%c Is Constant Character \r\n",c);
		break;

	}

}