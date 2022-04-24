/*
 * Assignment2_Ex2.c
 *
 *  Created on: Apr 23, 2022
 *      Author: Omar Khaled
 *  C program to check Vowel or Consonant letters
 */
#include <stdio.h>
int main(){
	setvbuf(stdout, NULL,_IONBF, 0);
	setvbuf(stderr, NULL,_IONBF, 0);
	char letter;
	printf("Enter an alphabet: ");
	scanf("%c", &letter);
	if (letter == 'a'){
		printf("%c is Vowel", letter);
	}
	else if(letter == 'o'){
		printf("%c is Vowel", letter);
	}
	else if(letter == 'u'){
		printf("%c is Vowel", letter);
	}
	else if(letter == 'e'){
		printf("%c is Vowel", letter);
	}
	else if(letter == 'i'){
		printf("%c is Vowel", letter);
	}
	else{
		printf("%c is Consonant", letter);
	}
	return 0;
}

