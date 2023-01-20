/*
 * Q9.c
 *
 *  Created on: Jan 17, 2023
 *      Author: Omar Khaled
 * Description: c function to reverse words in string
 */

#include <stdio.h>
#include <string.h>

void reverse(char *str, int size);
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char str[50];
	puts("Enter String");
	gets(str);
	reverse(str, strlen(str));

	return 0;
}

void reverse(char *str, int size){
	int i, j, k = 0;
	char ch[50];
	for(i = size-1; i>=0; i--){
		if(str[i] == ' '){
			for(j=k-1; j>=0; j--){
				printf("%c", ch[j]);
			}
			printf(" ");
			k = 0;
		}
		else{
			ch[k] = str[i];
			k++;
		}
	}
	if(k != 0){
		for(j = k-1; j >= 0; j--){
			printf("%c", ch[j]);
		}
	}
}
