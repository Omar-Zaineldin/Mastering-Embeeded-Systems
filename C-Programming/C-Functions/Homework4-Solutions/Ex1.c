#include<stdio.h>
void find_primes_between_intervals(int start, int end);
void main(void)
{
	/*This Program to get Prime Numbers Between two Intervals*/
	
	int first,last;
	printf("Plz Enter 2 Numbers (intervals): ");
	scanf("%d%d",&first,&last);
	find_primes_between_intervals(first,last);
}

void find_primes_between_intervals(int start, int end) 
{
    int num ,i,is_prime = 1;
	
	printf("Prime numbers between %d and %d are:\n", start, end);
    for (num = start; num <= end; num++) 
	{
        if (num < 2)
            continue;
      
		is_prime = 1;
		
        for (i = 2; i * i <= num; i++) 
		{
            if (num % i == 0) 
			{
                is_prime = 0;
                break;
            }
        }
        if (is_prime)
            printf("%d ", num);
    }
    printf("\n");
}

