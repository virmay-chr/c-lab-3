#include<stdio.h>
#include<locale.h>

const float INCH = 2.54f;
const float PULGADA = 2.32166f;
int inches;
float cm;

void main() {
	setlocale(LC_CTYPE, "RUS");

	puts("Введите дюймы");
	scanf_s("%d", &inches);
	cm = INCH * inches;
	printf("%d дюйм = %3.1f см\n", inches, cm);

	puts("Введите пульгады");
	scanf_s("%d", &inches);
	cm = PULGADA * inches;
	printf("%d пульгад = %3.1f см\n", inches, cm);
}