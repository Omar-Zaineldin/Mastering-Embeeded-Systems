#include<stdio.h>
#define PI  3.1415
#define AreaofCircle(r) PI*(r*r)

void main()
{
	int radious;
	
	printf("Enter radious: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&radious);
	printf("Area = %0.2f\n",AreaofCircle(radious));
}