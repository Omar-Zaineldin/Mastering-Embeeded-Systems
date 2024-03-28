#include<stdio.h>

typedef struct 
{
	float m_real;
	float m_imaginary;
}SComplxNumber; 

void main()
{
	/*Ex3 this program to add two complex numbers using structure*/
	SComplxNumber N1,N2,Sum;
	
	printf("For 1st complex number:\n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdout); fflush(stdin);
	scanf("%f%f",&N1.m_real,&N1.m_imaginary);

	printf("For 2nd complex number:\n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdout); fflush(stdin);
	scanf("%f%f",&N2.m_real,&N2.m_imaginary);
	
	/*Calculate the sum of 2 complec numbers*/
	Sum.m_real=N1.m_real+N2.m_real;
	Sum.m_imaginary=N1.m_imaginary+N2.m_imaginary;
	
	/*Display output*/
	
	printf("Sum = %.1f+%.1fi\n",Sum.m_real,Sum.m_imaginary);
	
}