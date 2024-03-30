#include<stdio.h>

void main()
{
	/*Ex1 in homework 6 c-pointers assignment this program to demonstrate how to handle the pointers */
	
	/*Define variable with type int and give it an intial value*/
	int m=29;
	
	/*Define a pointer variable with pointer type int this means that this pointer can only issue read/write transaction in memory with int size */
	/*also intialize pointer with address of variable m this means that ab point to the variable m*/
	int* ab=&m;
	
	/*reintialize the value of m directly*/
	m=34;
	/*reintialize the value of m indirect through pointer */
	*ab=7;
}