#include<stdio.h>
char CalculateFactorial(char);
void main(void)
{
	/*This Program to Calculate Factorial using Recursion*/
	char num;
	printf("Plz Enter number to get its factorial: ");
	scanf("%d",&num);
	/*This condation to be sure that the entered number is +ve not -ve number */
	if (num<0)
	printf("Plz Enter +ve number to get its factorial");
	else 
	printf("%d\n",CalculateFactorial(num));
}

char CalculateFactorial(char num)
{
	char fact=1;
	if(num>0)
		fact=num* CalculateFactorial(num-1);		
	return fact;
}