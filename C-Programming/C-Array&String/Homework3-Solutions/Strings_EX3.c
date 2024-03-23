#include<stdio.h>

void main(void)
{
	/*This Program to Reverse String*/
	
	char string[30],i=0,length=0;
		
	printf("Plz Enter a String : ");
	fflush(stdout);fflush(stdin);
	gets(string);
	
	while(string[i]!='\0')
	{
		length++;
		i++;
	}
	
	for(i=length-1;i>=0;i--)
		printf("%c",string[i]);
		
}
