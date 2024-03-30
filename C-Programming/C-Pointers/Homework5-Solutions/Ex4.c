#include<stdio.h>

void main()
{
	/*Ex4 in C Pointers assignment: this program to print the elements of an array in reverse order.*/
	
	int elements[15],size,*ptr;
	char i;
	ptr=elements;
	
	printf("Enter the number of elements to store in the array (max 15) : ");
	scanf("%d",&size);
	
	printf("Input %d number of elements in the array : \n",size);
	
	/*Get the elements values from user and store them in the array*/
	for(i=0;i<size;i++)
	{
		printf("element - %d : ",i+1);
		scanf("%d",ptr++);
	}
	
	//make pointer point to last element in the array,
	//because the last iteration in the for loop will make it point to the next location after the last one because the use of postfix increment.
	ptr--;
	
	printf("\nThe elements of array in reverse order are :\n");
	
	/*Displaying the elements in reverse order using pointer*/
	for(i=0;i<size;i++)
	{
		printf("element - %d : %d\n",size-i,*ptr--);
	}
	
	
}