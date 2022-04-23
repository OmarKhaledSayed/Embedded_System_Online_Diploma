/*
 * main.c
 *
 *  Created on: Apr 22, 2022
 *      Author: Omar Khaled
 *      Calculating the summation of values between 1 and 99
 */

#include <stdio.h>
int main(){
	setvbuf(stdout, NULL,_IONBF, 0);
	setvbuf(stderr, NULL,_IONBF, 0);
	int i;
	int sum = 0;
	for(i = 1; i <= 99; i++){
		sum += i;
	}
	printf("Sum = %i", sum);
	return 0;
}
