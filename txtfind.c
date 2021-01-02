
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "txtfind.h"

int getLine(char s[]) {
	int count = 0;
	for (int i = 0; i < LINE; i++) {
		if (scanf("%c", &s[i]) != EOF) {
			if (s[i] == '\n'  || s[i]== '\r'){ 
				s[i] = '\0';
				break;
			}
			count++;
		}
		else{
			break;
		}
		
	}
	return count;
}

int getWord(char w[]){
	int count = 0;
	for (int i = 0; i < WORD; i++) {
		if (scanf("%c", &w[i]) != EOF) {
			if (w[i] == '\n' || w[i] == '\t' || w[i] == ' '|| w[i] == '\r'){
				w[i] = '\0';
				break;
			}
				count++;
		}
		else break;
	}
	return count;
}

int substring(char* str1, char* str2) {
	int end = 0;
	int j = 0;
	while (*(str1+j) != '\0') {
		if (*(str1+j) == *(str2 + end)) {
			end++;
		}
		else {
			if (*(str2 + end)=='\0')
				return 1;
			end = 0;
		}
		j++;
	}
	if (*(str2 + end)=='\0')
		return 1;
	return 0;
}

int similar(char* s, char* t, int n) {
	int count =0;
	while (*s != '\0'&&count<=n) {
		if (*s == *t) {
			t ++;
		}
		else count++;
		s++;
		}
	if (*t == '\0' && count <= n)
		return 1;
	return 0;
}

void print_lines(char* str) {
	int k= 0;
	for (int i = 0; i < LINES; i++) {
		char s[LINE];
		k= getLine(s);
		if(k != 0){
			int ans = substring(s, str);
			if(ans == 1){
			printf("%s\n", s);
			}
		}
	}
}
void print_similar_words(char* str){
	int k = 0;
	for (int i = 0; i < LINES; i++) {
		char w[WORD];
		k = getWord(w);
		if(k != 0){
			if (similar(w, str,1) == 1) {
				printf("%s\n", w);
			}
		}
	}
	
}

