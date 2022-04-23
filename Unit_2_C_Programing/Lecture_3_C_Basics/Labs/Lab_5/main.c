/*
 * main.c
 *
 *  Created on: Apr 22, 2022
 *      Author: Omar Khaled
 *      calculating the average of student degrees taken from the user
 */

#include <stdio.h>
int main(){
	setvbuf(stdout, NULL,_IONBF, 0);
	setvbuf(stderr, NULL,_IONBF, 0);
	int i, nStudents;
	float average = 0,degree, sum;
	printf("Enter the number of students:");
	scanf("%i", &nStudents);
	for(i = 1; i <= nStudents; i++){
		printf("Enter student (%i) degree:", i);
		scanf("%f", &degree);
		sum += degree;
	}
	average = sum/nStudents;
	printf("Average students degree is: %f", average);
	return 0;
}

