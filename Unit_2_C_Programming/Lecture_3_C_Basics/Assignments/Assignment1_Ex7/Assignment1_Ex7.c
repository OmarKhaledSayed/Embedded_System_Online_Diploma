/*
 * Assignment1_Ex7.c
 *
 *  Created on: Apr 23, 2022
 *      Author: Omar Khaled
 *
	C program to Swap Two Numbers without temporary variable
 */

#include <stdio.h>
int main(){
	setvbuf(stdout, NULL,_IONBF, 0);
	setvbuf(stderr, NULL,_IONBF, 0);
	float a, b;
	printf("Enter value of a: ");
	scanf("%f", &a);
	printf("Enter value of b: ");
	scanf("%f", &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("After swapping, value of a = %f\n", a);
	printf("After swapping, value of b = %f\n", b);
	return 0;
}
