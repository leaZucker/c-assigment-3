#include <stdio.h>
#include "isort.h"
void shift_element(int* arr, int i) {
	 
	for (int j = i; j>0; j--) {
		if((arr+(j-1)) != NULL&&(arr + j)!=NULL){
			*(arr+j) = *(arr +( j-1));
		}
	}
}
void insertion_sort(int* arr, int len) {
	for (int i = 1; i < len; i++) {
		int key = *(arr + i);
		int k = 0;
		int j = i-1;
		while(j>=0){
			if(*(arr+j) > key){
				k++;
				j--;
			}
			else
				break;
		}
		if(k>0){
			j++;
			shift_element((arr + j), k);
			*(arr + j)=key;
		}
	}
}