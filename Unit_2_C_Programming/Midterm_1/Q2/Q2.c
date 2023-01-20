/*
 * Q2.c
 *
 *  Created on: Jan 14, 2023
 *      Author: Omar Khaled
 * Description: c function to take an integer number and calculate it's square root
 */

#include <stdio.h>
#include <math.h>

/*function prototype*/
float square_root (int num);

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int num = 0;
	printf("please enter a number you want to get its square root: ");
	scanf("%d",&num);
	printf("square root of %d = %.3f", num , square_root(num));
	return 0;
}

/*function definition*/
float square_root (int num){
return sqrt(num);
}

