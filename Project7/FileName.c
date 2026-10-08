#include <stdio.h>
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS

void main() {
	setlocale(LC_ALL, "RUS");
	int num;
	puts("Введите число: ");
	scanf("%d", &num);
	switch (num) {
		case 1:
			printf("I - римская цифра %d", num);
			break;
		case 2:
			printf("II - римская цифра %d", num);
			break;
		case 3:
			printf("III - римская цифра %d", num);
			break;
		case 4:
			printf("IV - римская цифра %d", num);
			break;
		case 5:
			printf("V - римская цифра %d", num);
			break;
		case 6:
			printf("VI - римская цифра %d", num);
			break;
		case 7:
			printf("VII- римская цифра %d", num);
			break;
		case 8:
			printf("VIII - римская цифра %d", num);
			break;
		case 9:
			printf("IX - римская цифра %d", num);
			break;
		case 10:
			printf("X - римская цифра %d", num);
			break;
		case 11:
			printf("XI - римская цифра %d", num);
			break;
		case 12:
			printf("XII - римская цифра %d", num);
			break;
		default:
			printf("Данного числа нет в диапазоне(");
			break;
	}
}