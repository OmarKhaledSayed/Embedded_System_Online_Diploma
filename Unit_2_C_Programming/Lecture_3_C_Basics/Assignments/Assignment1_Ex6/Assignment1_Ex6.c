/*
 * Assignment1_Ex6.c
 *
 *  Created on: Apr 23, 2022
 *      Author: Omar Khaled
 *  Write Source Code to Swap Two Numbers
 */

#include <stdio.h>
int main(){
	setvbuf(stdout, NULL,_IONBF, 0);
	setvbuf(stderr, NULL,_IONBF, 0);
	float a, b, c;
	printf("Enter value of a: ");
	scanf("%f", &a);
	printf("Enter value of b: ");
	scanf("%f", &b);
	c = a;
	a = b;
	b = c;
	printf("After swapping, value of a = %f\n", a);
	printf("After swapping, value of b = %f\n", b);
	return 0;
}
