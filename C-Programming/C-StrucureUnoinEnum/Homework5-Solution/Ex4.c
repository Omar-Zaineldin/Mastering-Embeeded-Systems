#include<stdio.h>

typedef struct 
{
	char name[10];
	int rollNumber;
	float marks;
}SStudent; 

void main()
{
	/*Ex4 in homework 5,This program to store information for students using structure */
	
	SStudent stds[10];
	char i;
	
	/*Store informations */
	printf("\nEnter informations of students:\n");
	
	for(i=0;i<10;i++)
	{
		stds[i].rollNumber=i+1;
		printf("\nFor roll number %d \n",stds[i].rollNumber);
		printf("Enter name: ");
		fflush(stdout); fflush(stdin);
		gets(stds[i].name);
		printf("Enter marks: ");
		fflush(stdout); fflush(stdin);
		scanf("%f",&stds[i].marks);
	}
	
	/*Display informations*/
	printf("\nDisplaying informations of students:\n");
	
	for(i=0;i<10;i++)
	{
		printf("\nInformation for roll number %d \n",stds[i].rollNumber);
		printf("Name: %s\n",stds[i].name);
		printf("Marks: %.2f\n",stds[i].marks);

	}
	
}

