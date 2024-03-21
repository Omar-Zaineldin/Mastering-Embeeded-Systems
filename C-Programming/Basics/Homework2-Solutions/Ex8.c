#include"stdio.h"

void main()
{
	/* EX8: Program to Make Simple Calculator */
	
	float op1,op2;
	char operator;
	
	printf("Plz Enter Operator Note ( + ) \"Add\" , (-) \"Subtract\" , (*) \"Multiply\" , (/) \"Devide\"\r\n");
	fflush(stdout); fflush(stdin);
	scanf("%c",&operator);
	printf("Plz Enter Operand 1 \n");
	fflush(stdout); fflush(stdin);
	scanf("%f",&op1);
	printf("Plz Enter Operand 2 \n");
	fflush(stdout); fflush(stdin);
	scanf("%f",&op2);

	
	switch(operator)
	{
		case '+':
		{
			printf("%f + %f = %f \r\n",op1,op2,(op1+op2));
		}
		break;
		
		case '-':
		{
			printf("%f - %f = %f \r\n",op1,op2,(op1-op2));
		}
		break;
		
		case '*':
		{
			printf("%f * %f = %f \r\n",op1,op2,(op1*op2));
		}
		break;
		
		case '/':
		{
			printf("%f / %f = %f \r\n",op1,op2,(op1/op2));
		}
		break;
		
		default:
			printf("You Enterd Wrong Operator \r\n");
		break;
	}

}