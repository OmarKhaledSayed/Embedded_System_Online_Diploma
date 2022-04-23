/*
 * Assignment1_Ex5.c
 *
 *  Created on: Apr 23, 2022
 *      Author: Omar Khaled
 *  Write C Program to Find ASCII Value of a Character
 */
#include <stdio.h>
int main(){
	setvbuf(stdout, NULL,_IONBF, 0);
	setvbuf(stderr, NULL,_IONBF, 0);
	char character;
	printf("Enter a character: ");
	scanf("%c", &character);
	printf("ASCII value of %c = %i", character, character);
	return 0;
}


