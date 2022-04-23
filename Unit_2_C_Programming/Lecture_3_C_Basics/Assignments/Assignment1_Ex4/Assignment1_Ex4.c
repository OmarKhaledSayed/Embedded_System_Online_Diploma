/*
 * Assignment1_Ex4.c
 *
 *  Created on: Apr 23, 2022
 *      Author: Omar Khaled
 *  Write C Program to Multiply two Floating Point Numbers
 */

#include <stdio.h>
int main(){
	setvbuf(stdout, NULL,_IONBF, 0);
	setvbuf(stderr, NULL,_IONBF, 0);
	float num1, num2, product;
	printf("Enter two numbers: ");
	scanf("%f %f", &num1, &num2);
	product = num1 * num2;
	printf("Sum: %f", product);
	return 0;
}
