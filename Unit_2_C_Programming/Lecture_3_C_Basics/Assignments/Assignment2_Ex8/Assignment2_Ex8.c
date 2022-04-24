/*
 * Assignment2_Ex8.c
 *
 *  Created on: Apr 24, 2022
 *      Author: Omar Khaled
 *      C program to make a simple calculator to Add, subtract, Multiply, Divide using switch case
 */
#include <stdio.h>
int main(){
	setvbuf(stdout, NULL,_IONBF, 0);
	setvbuf(stderr, NULL,_IONBF, 0);
	float operand1, operand2, result;
	char operator;
	printf("Enter operator either + or - or * or /: ");
	scanf("%c", &operator);
	printf("Enter two operands: ");
	scanf("%f %f", &operand1, &operand2);
	switch (operator){
	case '+':
		result = operand1 + operand2;
		break;
	case '-':
		result = operand1 - operand2;
		break;
	case '*':
		result = operand1 * operand2;
		break;
	case '/':
		result = operand1 / operand2;
		break;
	default:
		printf("You entered invalid operator!!");\
	}
	printf("%f %c %f = %f", operand1, operator, operand2, result);
	return 0;
}

