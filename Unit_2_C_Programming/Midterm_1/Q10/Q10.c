/*
 * Q10.c
 *
 *  Created on: Jan 17, 2023
 *      Author: Omar Khaled
 * Description: c function to count the max number of ones between two zeros
 */

#include <stdio.h>

char max_ones(char num);

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int num;
	printf("Enter number:");
	scanf("%d", &num);
	printf("max ones are %d", max_ones(num));
	return 0;
}

char max_ones(char num){
	char count = 0;
	while (num != 0){
		num = (num & (num<<1));
		count ++;
	}
	return count;
}
