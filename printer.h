#include <stdio.h>

void print_words(int num, char* words, char* str) {
	for (int i = 0; i < num; i++) {
		printf("%s\n", &str[words[i]]);
	}
}