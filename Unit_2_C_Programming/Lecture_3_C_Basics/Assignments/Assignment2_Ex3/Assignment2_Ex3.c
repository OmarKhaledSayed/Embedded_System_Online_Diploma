/*
 * Assignment2_Ex3.c
 *
 *  Created on: Apr 23, 2022
 *      Author: Omar Khaled
 *      C program to find the maximum number among three numbers
 */

#include <stdio.h>
int main(){
	setvbuf(stdout, NULL,_IONBF, 0);
	setvbuf(stderr, NULL,_IONBF, 0);
	float num1, num2, num3, max;
	printf("Enter three numbers: ");
	scanf("%f %f %f", &num1, &num2, &num3);
	max = num1;
	if(num2 > max){
		max = num2;
	}
	if(num3 > max){
		max = num3;
	}
	printf("largest number = %f", max);
	return 0;
}
