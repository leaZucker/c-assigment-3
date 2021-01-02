#include <stdio.h>
#include "txtfind.h"
int main() {
	char w[WORD], o[WORD] ;
	printf("please enter word:\n");
	getWord(w);
	printf("you chose the word : %s\n",w);
	printf("please choose option:\n a - print the lines this word apear\n b - print similar words \n");
	getWord(o);
	if (*o == 'a'){
		printf("you chose option: %c\n",*o);
		print_lines(w);
	}
	else if (*o == 'b'){
		printf("you chose option: %c\n",*o);
		print_similar_words(w);
	}
	else{
		printf("wrong input need to be: {a,b}");
	}
	return 0;
}