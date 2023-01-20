/*
 * Q6.c
 *
 *  Created on: Jan 17, 2023
 *      Author: Omar Khaled
 * Description: c function to return unique number in array with one loop
 */

#include <stdio.h>

int unique(int a[], int size);
int main(){
	//int a[]={4,2,4};
	int a[] = {4,2,5,2,5,7,4}; //test case 2
	int size = sizeof(a)/sizeof(a[0]);
	printf("unique number in array is %d", unique(a,size));
	return 0;
}

int unique(int a[], int size){
	int res = 0, i;
	for(i = 0; i < size; i++){
		res ^= a[i];
	}
	return res;
}
