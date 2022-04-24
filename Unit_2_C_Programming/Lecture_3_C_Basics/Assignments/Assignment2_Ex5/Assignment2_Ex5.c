/*
 * Assignment2_Ex5.c
 *
 *  Created on: Apr 24, 2022
 *      Author: Omar Khaled
 *      C program to check whether a character is an alphabet of not
 */

#include <stdio.h>
int main(){
	setvbuf(stdout, NULL,_IONBF, 0);
	setvbuf(stderr, NULL,_IONBF, 0);
	char character;
	printf("Enter a character: ");
	scanf("%c", &character);
	if((character>=65 && character<=90)||(character>=97 && character<=122)){
		printf("%c is an alphabet", character);
	}
	else{
		printf("%c is not an alphabet", character);
	}
	return 0;
}
