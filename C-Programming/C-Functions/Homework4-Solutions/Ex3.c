#include<stdio.h>
void ReverseString(void);
void main(void)
{
	/*This Program to Reverse String using Recursion*/
	
	printf("Plz Enter sentense: ");
	ReverseString();
}

void ReverseString(void)
{
	char ch;
	scanf("%c",&ch);
	if(ch!='\n')
	{
		ReverseString();
		printf("%c",ch);
	}
		
}