/*
 * Assignment1_Ex3.c
 *
 *  Created on: Apr 23, 2022
 *      Author: Omar Khaled
 *  Write C Program to Add Two Integers
 */
#include <stdio.h>
int main(){
	setvbuf(stdout, NULL,_IONBF, 0);
	setvbuf(stderr, NULL,_IONBF, 0);
	int num1, num2, sum;
	printf("Enter two integers: ");
	scanf("%i %i", &num1, &num2);
	sum = num1 + num2;
	printf("Sum: %i", sum);
	return 0;
}
