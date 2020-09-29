#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sorted_h(char* str, char* words, int num) {
	for (int j = num - 1; j > 0; j--) {
		for (int i = 0; i < j; i++) {
			if (strcmp(&str[words[i]], &str[words[i + 1]]) > 0)
			{
				int temp = words[i];
				words[i] = words[i + 1];
				words[i + 1] = temp;
			}
		}
	}
	return num;
}