#include<stdio.h>

#define NumberofAlphabets 26
#define AsciiValueof1stCharacter 0x41

void main()
{
	/*Ex2 in C Pointers assignment: this program to print all the alphabets using a pointer.*/
	
	char alphapets[NumberofAlphabets];
	char i,ascii= AsciiValueof1stCharacter;
	char* ptr=alphapets;
	
	for(i=0;i<NumberofAlphabets;i++)
	{
		alphapets[i]=ascii++;
	}
	
	for(i=0;i<NumberofAlphabets;i++)
	{
		printf("%c  ",*ptr++);
	}
	printf("\n");
	
}