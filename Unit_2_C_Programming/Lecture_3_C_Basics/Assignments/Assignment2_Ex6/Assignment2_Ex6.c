/*
 * Assignment2_Ex6.c
 *
 *  Created on: Apr 24, 2022
 *      Author: Omar Khaled
 *      C program to calculate sum of natural numbers
 */

#include <stdio.h>
int main(){
	setvbuf(stdout, NULL,_IONBF, 0);
	setvbuf(stderr, NULL,_IONBF, 0);
	int i, lower_limit, upper_limit, sum = 0;
	printf("Enter Lower limit and upper limit of the numbers you want to find its sum: ");
	scanf("%i %i", &lower_limit, &upper_limit);
	for(i = lower_limit; i <= upper_limit; i++ ){
		sum += i;
	}
	printf("Sum = %i", sum);
	return 0;
}

