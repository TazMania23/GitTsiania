/*
 ============================================================================
 Name        : Lab2Part1.c
 Author      : Tsiania
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int exit=0;
		while(exit!=5)
		{
			//Problem 1
			//menu and selecting option
			int option;
			printf("\nMenu \n 1)Factorial \n 2)Leap Year \n 3)Maximum \n 4)Division \n 5)Exit");
			printf("\nYour selection: ");
			scanf("%d",&option);

			while(option<1 || option>5)
			{
				printf("\nPlease input one of the following options");
				printf("\nMenu \n 1)Factorial \n 2)Leap Year \n 3)Maximum \n 4)Division \n 5)Exit");
				printf("\nYour selection: ");
				scanf("%d",&option);
			}
			//variables
				unsigned short int num;
				unsigned long int total=1;
				unsigned int year;
				float num1,num2,max;
				int numb1,numb2;
				float sum=0;


			switch(option){

			case 1: //factorial

					printf("\nFactorial! Input the number you would like to calculate: ");
					scanf("%hu",&num);
					//make sure its a number greater than 0
					if(num<=0)
						break;
					//calculations
					for(int x=1;x<=num; x++)
					{
						total*= x;
					}
					printf("\nThe factorial of %hu is %lu\n",num,total);
					break;

			case 2://Leap year

					printf("\nWhat year would you like to check for Leap Year?\n Year: ");
					scanf("%u",&year);
					//if less than
					if(year<=0)
						break;
					//checking for leap year,
					if((year%400)==0)
						printf("\nIt's a Leap Year!!\n");

					else if((year%100)==0)
						printf("\nIt's not a Leap Year.\n");

					else if((year%4)==0)
						printf("\nIt's a Leap Year!!\n");

					else
						printf("\nIt's not a Leap Year.\n");

					break;

			case 3://Maximum

					printf("\nInput number 1: ");
					scanf("%f",&num1);

					printf("\nInput number 2: ");
					scanf("%f",&num2);
					//if num1 is greater than num2 then max== num1 else max == num2
					max= num1>num2 ? num1:num2;
					//print max
					printf("\nThe max between %.2f and %.2f is %.2f\n", num1, num2,max);
					break;

			case 4://Division


					printf("\nEnter in the first number: ");
					scanf("%d", &numb1);
					printf("\nEnter in the second number: ");
					scanf("%d", &numb2);
					//check for dividing by zero
					if(numb2==0)
					{
						printf("\nError, dividing by zero\n");
						break;
					}
					unsigned int year;
					sum= ((float)numb1)/((float)numb2);
					printf("\n %d divided by %d = %.3f\n",numb1,numb2,sum);

					break;

			case 5://Exit
					exit=5;
					break;
			}

		}
		return 0;
}
