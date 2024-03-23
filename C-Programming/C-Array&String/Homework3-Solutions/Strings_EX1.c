#include<stdio.h>

void main(void)
{
	/* EX1: This C program to find the Frequency of Charachter in a Sentence */
	
	char string[30],ch,i=0,count=0;
	
	printf("Plz Enter a Sentence : ");
	fflush(stdout);fflush(stdin);
	gets(string);
	printf("Plz Enter a Charachter to Find a Frequency : ");
	fflush(stdout);fflush(stdin);
	scanf("%c",&ch);
	
	while(string[i]!='\0')
	{
		if (string[i]==ch)
			count++;
		i++;
	}
	
	printf("Frequency of %c is = %d\n",ch,count);
	
}
