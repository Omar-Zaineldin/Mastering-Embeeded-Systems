#include<stdio.h>
#include<math.h>
typedef struct 
{
	int feet;
	float inch;
}SDistance; 

void main()
{
	/*Ex2 in homework 5,This program to store information for 2 distances using structure */
	
	SDistance D1,D2,Sum;
	
	/*Store informations */
	printf("Enter informations of 1st distance:\n");
	printf("Enter feet: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&D1.feet);
	printf("Enter inch: ");
	fflush(stdout); fflush(stdin);
	scanf("%f",&D1.inch);
	
	printf("\nEnter informations of 2nd distance:\n");
	printf("Enter feet: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&D2.feet);
	printf("Enter inch: ");
	fflush(stdout); fflush(stdin);
	scanf("%f",&D2.inch);
	

	/* Calculate the sum of distances*/
	Sum.inch=fmod((D1.inch+D2.inch),12);
	Sum.feet=(D1.feet+D2.feet)+(int)((D1.inch+D2.inch)/12);
	
	/*Display informations*/
	printf("Sum of distances = %d' feet - %.1f\" inch \n",Sum.feet,Sum.inch);
}

	