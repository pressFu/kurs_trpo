#include <string.h>
#include <iostream>
#include <conio.h>
#include <C:\Users\User\source\repos\kurs_trpo\kurs_trpo/sorted.h>
#include <C:\Users\User\source\repos\kurs_trpo\kurs_trpo/words.h>
#include <C:\Users\User\source\repos\kurs_trpo\kurs_trpo/printer.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	char str[5000];
	char words[1500];
	int num = 0;
	cout << "Введите текст: " << endl;
	gets_s(str);
	num = words_h(str, words, num);
	sorted_h(str, words, num);
	print_words(num, words, str);
	return 0;
}