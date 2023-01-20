/*
 * Q5.c
 *
 *  Created on: Jan 16, 2023
 *      Author: Omar Khaled
 * Description: c function to count number of ones in binary number
 */
#include <stdio.h>

int no_of_ones(int num);
void binary_representation_of(int num);

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int num;
	printf("please enter a number:\n");
	scanf("%d", &num);
	printf("the number of ones in %d (which is ", num);
	binary_representation_of(num);
	printf(" in binary) is %d\n", no_of_ones(num));
	return 0;
}

int no_of_ones(int num){
	int no_of_ones = 0;
	int i;
	for(i = 0; i < 32; i++){
		if(num & (1 << i)){
			no_of_ones ++;
		}
	}

	return no_of_ones;
}
void binary_representation_of(int num){
	int i;
	for(i = 31; i >= 0; i--){
		if(num & (1<<i)){
			printf("1");
		}
		else{
			printf("0");
		}
	}
}

