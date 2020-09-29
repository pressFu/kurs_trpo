#include <stdio.h>
#include <stdlib.h>

int words_h(char *str,char* words, int num) {
	for (int i = 0, fl = 1; str[i]; i++) {
		if (str[i] == ' ') {
			str[i] = 0;
			fl = 1;
		}
		else if (fl) {
			words[num++] = i;
			fl = 0;
		}
	}
	return num;
}
