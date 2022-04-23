/*
 * main.c
 *
 *  Created on: Apr 22, 2022
 *      Author: Omar Khaled
 *      calculating the minimum of two numbers
 */
#include <stdio.h>
int main(){
	setvbuf(stdout, NULL,_IONBF, 0);
	setvbuf(stderr, NULL,_IONBF, 0);
	float num1, num2, min;
	printf("Enter two numbers:");
	scanf("%f %f", &num1, &num2);
	min = (num1<num2)? num1:num2;
	printf("Minimum number = %f", min);
	return 0;
}
