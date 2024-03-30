#include<stdio.h>

void main()
{
	/*Ex3 in C Pointers assignment: this program to print a string in reverse using a pointer.*/
	
	char string[30],i=0;
	char *ptr;
	
	printf("Enter String: ");
	gets(string);
	
	while(string[i++]);
	
	ptr=&string[--i];
	
	printf("Reverse of the string is: ");
	for(;i>=0;i--)
		printf("%c",*ptr--);
	
	printf("\n");
}