
#ifndef _TXTFIND_
#define _TXTFIND_

#define LINE 256
#define WORD 30
#define LINES 250

int getLine(char s[]);

int getWord(char w[]);

int substring(char* str1, char* str2);

int similar(char* s, char* t, int n);

void print_similar_words(char* str);

void print_lines(char* str);

#endif
