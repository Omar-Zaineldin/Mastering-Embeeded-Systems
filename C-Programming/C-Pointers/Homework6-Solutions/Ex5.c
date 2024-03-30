#include<stdio.h>

typedef struct 
{
	char* name;
	int ID;
	
}SEmployee;

void main()
{
	/*Ex5 in C Pointers assignment: this program  to show a pointer to an array which contents are pointer to structure.*/

	SEmployee Employee1,Employee2;
	
	SEmployee* arr[]={&Employee1,&Employee2};
	arr[0]->name="omar";
	arr[0]->ID=1001;
	arr[1]->name="Alex";
	arr[1]->ID=1002;
	SEmployee** Parr=arr;
	
	printf("Employee Name : %s\n",(*++Parr)->name);
	printf("Employee Id : %d \n",(*Parr)->ID);
	
	
	
}