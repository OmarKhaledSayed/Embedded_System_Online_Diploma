/*
 * Q1.c
 *
 *  Created on: Jan 14, 2023
 *      Author: Omar Khaled
 * Description: c function to take a number and sum all digits
 */

#include <stdio.h>

/*function prototype*/
int sum_digits (int num);

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int num = 0;
	printf("please enter a number you want to add its digits: ");
	scanf("%d",&num);
	printf("sum = %d", sum_digits(num));
	return 0;
}

/*function definition*/
int sum_digits (int num){
	static int sum = 0;
	int rem = 0;
	if(num != 0){
		rem = num%10;
		sum += rem;
		sum_digits(num/10);
	}
	else{
		return 0;
	}
	return sum;
}
