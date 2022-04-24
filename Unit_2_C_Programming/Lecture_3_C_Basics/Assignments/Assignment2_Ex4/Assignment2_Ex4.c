/*
 * Assignment2_Ex4.c
 *
 *  Created on: Apr 24, 2022
 *      Author: Omar Khaled
 *      C program to check whether a number is positive or negative or zero
 */

#include <stdio.h>
int main(){
	setvbuf(stdout, NULL,_IONBF, 0);
	setvbuf(stderr, NULL,_IONBF, 0);
	int num;
	printf("Enter a number: ");
	scanf("%i", &num);
	if(num == 0){
		printf("num is equals to zero");
	}
	else if(num > 0){
		printf("num is positive");
	}
	else{
		printf("num is negative");
	}
	return 0;
}
