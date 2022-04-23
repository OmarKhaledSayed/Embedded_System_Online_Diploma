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
	int radius;
	char input;
	float result;
	printf("Please enter radius of the circle:");
	scanf(" %d", &radius);
	printf("Please enter letter \"a\" if you want to calculate area of the circle or letter \"c\" if you want to calculate circumference of the circle:");
	scanf(" %c", &input);
	if(input == 'a'){
		result = 3.14*radius*radius;
		printf("Area of Circle = %f", result);
	}
	else if(input == 'c'){
		result = 2*3.14*radius;
		printf("Circumference of Circle = %f",result);
	}
	else{
		printf("You Entered a wrong letter!");
	}
	return 0;
}
