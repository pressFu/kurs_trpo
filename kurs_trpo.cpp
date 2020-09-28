#include <string.h>
#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	char str[5000];
	char words[1500];
	int num = 0;
	gets_s(str);
	int fl;
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



	return 0;
}