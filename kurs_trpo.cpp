#include <string.h>
#include <iostream>
#include <conio.h>
using namespace std;

void print_words(int num, char* words, char* str) {
	for (int i = 0; i < num; i++) {
		printf("%s\n", &str[words[i]]);
	}
}

int main() {
	setlocale(LC_ALL, "Rus");
	char str[5000];
	char words[1500];
	int num = 0;
	cout << "Введите текст: " << endl;
	gets_s(str);
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
	print_words(num, words, str);
	return 0;
}