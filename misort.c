#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "isort.h"
int main(void) {
	int arry[NUMBERS];
	for (int i = 0; i <NUMBERS; i++) {
		printf("please enter number %d /50:\n", i+1);
		scanf("%d",(arry+i));
	}
	for(int j = 0 ; j<NUMBERS ; j++){
		if(j==49){
			printf("%d\n\n\n",*(arry+j));
		}
		else{
			printf("%d,",*(arry+j));
		}
	}
	insertion_sort(arry,NUMBERS);
	for(int j = 0 ; j<NUMBERS ; j++){
		if(j==49){
			printf("%d\n",*(arry+j));
		}
		else{
			printf("%d,",*(arry+j));
		}
	}
	return 1;
}