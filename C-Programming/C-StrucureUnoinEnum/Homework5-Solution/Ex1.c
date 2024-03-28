#include<stdio.h>

typedef struct 
{
	char name[10];
	int rollNumber;
	float marks;
}SStudent; 

void main()
{
	/*Ex1 in homework 5,This program to store information for student using structure */
	
	SStudent S1;
	
	/*Store informations */
	printf("Enter informations of students:\n");
	printf("Enter name: ");
	fflush(stdout); fflush(stdin);
	gets(S1.name);
	printf("Enter roll number: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&S1.rollNumber);
	printf("Enter marks: ");
	fflush(stdout); fflush(stdin);
	scanf("%f",&S1.marks);
	
	/*Display informations*/
	printf("\nDisplaying information:\n");
	printf("name: %s \n",S1.name);
	
	printf("roll number: %d \n",S1.rollNumber);

	printf("marks: %.2f \n",S1.marks);

}

