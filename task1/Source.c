#include<stdio.h>
#include<locale.h>

float a, b;

void main() {
	setlocale(LC_CTYPE, "RUS");

	puts("¬ведите число A");
	scanf_s("%f", &a);
	printf("A = %3.1f\n", a);

	puts("¬ведите число B");
	scanf_s("%f", &b);
	printf("B = %3.1f\n", b);

	printf("%3.1f + %3.1f = %3.1f\n", a, b, a + b);
	printf("%3.1f - %3.1f = %3.1f\n", a, b, a - b);
	printf("%3.1f * %3.1f = %3.1f\n", a, b, a * b);
	printf("%3.1f / %3.1f = %3.1f\n", b, a, b / a);
}