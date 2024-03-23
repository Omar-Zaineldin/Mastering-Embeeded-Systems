#include<stdio.h>

void main(void)
{
	/*This Program to Find length of String*/
	
	char string[30],i=0,length=0;
		
	printf("Plz Enter a String : ");
	fflush(stdout);fflush(stdin);
	gets(string);
	
	while(string[i]!='\0')
	{
		length++;
		i++;
	}
	
	printf("The Length of String is = %d\n",length);

}
