#include<stdio.h>
#include<locale.h>

int a, b;

void main() {
	setlocale(LC_CTYPE, "RUS");
	puts("Введите число A");
	scanf_s("%d", &a);
	printf("A = %d\n", a);

	puts("Введите число B");
	scanf_s("%d", &b);
	printf("B = %d\n", b);

	puts("Введите число FFFFFFF");
	scanf_s("%d", &b);
	printf("B = %d\n", b);

	printf("-------------\n");
	printf("|a*b|a+b|a-b|\n");
	printf("-------------\n");
	printf("|%d*%d|%d+%d|%d-%d|\n", a, b, a, b, a, b);
	printf("-------------\n");
	printf("|%d|%d|%d|\n", a * b, a + b, a - b);
}