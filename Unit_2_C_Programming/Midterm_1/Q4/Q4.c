/*
 * Q4.c
 *
 *  Created on: Jan 16, 2023
 *      Author: Omar Khaled
 * Description: c function to reverse digits in number
 */

#include <stdio.h>

int reverse (int num);
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int num;
	printf("please enter a number you want to get its reverse:\n");
	scanf("%d", &num);
	printf("the reverse of %d is %d", num, reverse(num));
	return 0;
}

int reverse (int num){
	int reverse = 0, remainder;
	while(num != 0){
			remainder = num % 10;
			reverse = reverse * 10 + remainder;
			num = num / 10;
		}
	return reverse;
}
