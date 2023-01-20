/*
 * Q8.c
 *
 *  Created on: Jan 17, 2023
 *      Author: Omar Khaled
 * Description: c function to take an array and reverse its elements
 */

#include <stdio.h>
#define MAX 20

void reverse(int *a, int size);

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int a[] = {1,2,3,4,5}, size, i;
	size = sizeof(a)/sizeof(*a); //represent the size of array or the no of elements in the array.
	reverse(a, size);
	for(i = 0; i<size; i++){
		printf("%d ", a[i]);
	}
	return 0;
}
void reverse(int *a, int size){
	int i, b[MAX], c = 0;
	for(i = 0; i<size; i++){
		b[c] = a[size-1-i];
		c++;
	}
	for(i = 0; i<size; i++){
		a[i] = b[i];
	}
}
