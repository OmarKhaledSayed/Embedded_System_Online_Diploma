/*
 * main.c
 *
 *  Created on: Apr 22, 2022
 *      Author: Omar Khaled
 */
#include <stdio.h>
int main(){
	setvbuf(stdout, NULL,_IONBF, 0);
	setvbuf(stderr, NULL,_IONBF, 0);
	float num1, num2, num3;
	float max;
	printf("Enter three values:");
	scanf("%f %f %f", &num1, &num2, &num3);
	max = num1;
	if (max < num2){
		max = num2;
	}
	if(max < num3){
		max = num3;
	}
	printf("The largest value is %f", max);
	return 0;
}

