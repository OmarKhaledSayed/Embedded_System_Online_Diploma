/*
 * Q7.c
 *
 *  Created on: Jan 17, 2023
 *      Author: Omar Khaled
 * Description: c function to sum numbers from 1 to 100(without loop)
 */

#include <stdio.h>

int main(void) {

	int n = 100, sum;


	//initialize sum with 0
	sum =0;

	//use formula to get the sum from 0 to n
	sum = n*(n+1)/2;

	//print sum
	printf("sum = %d\n", sum);

	return 0;
}
