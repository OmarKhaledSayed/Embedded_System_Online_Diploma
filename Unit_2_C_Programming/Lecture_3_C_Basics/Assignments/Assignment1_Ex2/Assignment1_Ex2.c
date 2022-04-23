/*
 * Assignment1_Ex2.c
 *
 *  Created on: Apr 23, 2022
 *      Author: Omar Khaled
 *	Write C Program to Print a Integer Entered by a User
 */

#include <stdio.h>
int main(){
	setvbuf(stdout, NULL,_IONBF, 0);
	setvbuf(stderr, NULL,_IONBF, 0);
	int integer;
	printf("Enter a integer: ");
	scanf("%i", &integer);
	printf("You entered: %i", integer);
	return 0;
}
