/*
 * Assignment2_Ex1.c
 *
 *  Created on: Apr 23, 2022
 *      Author: Omar Khaled
 *      C program to check whether a number is odd or even
 */
#include <stdio.h>
int main(){
	setvbuf(stdout, NULL,_IONBF, 0);
	setvbuf(stderr, NULL,_IONBF, 0);
	int num;
	printf("Enter an integer you want to check: ");
	scanf("%i", &num);
	if((num%2) == 0){
		printf("%i is even", num);
	}
	else{
		printf("%i is odd", num);
	}
	return 0;
}

