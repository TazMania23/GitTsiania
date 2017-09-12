/*
 ============================================================================
 Name        : Lab1.c
 Author      : Tsiania Hughes
 Version     :
 Copyright   : Your copyright notice
 Description : Lab1 in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.1415


int main(void) {
	//Just came to say hello
	double r=0;
	//Circle Area Part 1
	printf("What is the radius of your circle?");
	scanf("%lf", &r);

	// make sure that r != 0
	while(r<=0)
	{
		printf("\nError, Enter a number greater than zero: ");
		scanf("%lf",&r);
	}

	//Area
	double Area= r * r* pi;
	printf("Area of your circle is %.2f\n", Area);

	// Profit Part 2
	double cost=0;
	double sell=0;
	double profit;
	//cost
	printf("\nEnter in the cost of the object: ");
	scanf("%lf", &cost);
	//cost check greater than 0
	while(cost<=0)
	{
		printf("\nError, Enter in a number greater than zero: ");
		scanf("%lf",&cost);
	}

	//sell
	printf("\nEnter in how much you are selling the object for: ");
	scanf("%lf", &sell);
	//cost check greater than 0
	while(sell<=0)
	{
		printf("\nError, Enter in a number greater than zero: ");
		scanf("%lf",&sell);
	}

	//make or break money
	if(cost>sell)
	{
		profit=cost-sell;
		printf("You have lost %.2f dollars -_- shame\n", profit);
	}
	else
	{
		profit=sell-cost;
		printf("You have made a profit of %.2f dollars, great job\n", profit);
	}

	//Calculator Part 3
	int op1;
	int op2;
	char optor;
	int total=0;
	double division;

	//getting values
	printf("\nOperand 1: ");
	scanf("%d", &op1);

	printf("\nOperator: ");
	optor=getchar();
	optor=getchar();

	printf("\nOperand 2: ");
	scanf("%d",&op2);

	// Seeing what operator given
	switch(optor){

	case '+':
		total= op1+ op2;
		printf("\nThe total of %d + %d= %d\n", op1,op2,total);
		break;

	case '-':
		total= op1-op2;
		printf("\nThe total of %d - %d= %d\n", op1,op2,total);
		break;

	case '*':
		total= op1*op2;
		printf("\nThe total of %d * %d= %d\n", op1,op2,total);
		break;

	case '/':
		if(op2==0)
		{
			printf("Error Dividing by zero\n");
			return 0;
		}
		else
		{
			division= op1/op2;
			printf("\nThe total of %d / %d= %.2f", op1, op2, division);
		}
		break;

	default:
		printf("Error, operand is not legit\n");

	}
	return 0;
}
