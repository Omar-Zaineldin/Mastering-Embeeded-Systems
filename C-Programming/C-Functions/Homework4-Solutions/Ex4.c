#include<stdio.h>
int  CalcPower(int base,int power);
void main(void)
{
	/*This Program to Calculate power using Recursion*/
	int base,power;
	
	printf("Plz Enter base number: ");
	scanf("%d",&base);
	printf("Plz Enter power number (positive integer): ");
	scanf("%d",&power);
	printf("%d\n",CalcPower(base,power));
}

int  CalcPower(int base,int power)
{
	int result=1;
	if(power>0)
	{
		
		result=base*CalcPower(base,power-1);
	}
	return result;	
}