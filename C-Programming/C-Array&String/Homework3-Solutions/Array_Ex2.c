#include<stdio.h>
#include <stdlib.h>

void main(void)
{
	/*This Program Calc Average of Array*/
	
	int ArraySize,i=0;
	float* array;
	float ArraySum=0;
	
	printf("Plz Enter Size Of Array: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&ArraySize);
	
	/* This Called a Dynamic Array -Dynamic Memory Allocation- it's return address of 1st reserved byte */
	array=malloc(ArraySize * sizeof(float));
	
	/*This Condition Because Sometimes there is no Size Avilable in Memory */
	if(array!=NULL)
	{
		/*This Loop To Take Values From user*/
		for(i=0;i<ArraySize;i++)
		{
			printf("Enter Value Of Element %d: ",i+1);
			fflush(stdin); fflush(stdout);
			scanf("%f",&array[i]);
		}
		
		/*This Loop To calc the avg*/
		for(i=0;i<ArraySize;i++)
		{
			ArraySum+=array[i];
		}
		
		/*This To destroy the array destroy means -no access to these locations-*/
		free(array);
		
		fflush(stdin); fflush(stdout);
		printf("The Average = %.2f\n",(ArraySum/ArraySize));
	}
	
	else 
		printf("There is No Storage Size Avilable \n");
}
