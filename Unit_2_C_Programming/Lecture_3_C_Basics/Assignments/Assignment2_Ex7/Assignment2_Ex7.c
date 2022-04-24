/*
 * Assignment2_Ex7.c
 *
 *  Created on: Apr 24, 2022
 *      Author: Omar Khaled
 *      C program to find a factorial of a number
 */

#include <stdio.h>
int main(){
	setvbuf(stdout, NULL,_IONBF, 0);
	setvbuf(stderr, NULL,_IONBF, 0);
	int i, number;
	int factorial = 1;
	printf("Enter a number: ");
	scanf("%i", &number);
	if (number == 0){
		printf("Factorial of 0 equals 1");
	}
	else if (number < 0){
		printf("ERROR !!! Factorial for negative number doesn't exist");
	}
	else{
		for(i = 1; i <= number; i++ ){
			factorial *= i;
		}
		printf("%i", factorial);
	}
	return 0;
}
