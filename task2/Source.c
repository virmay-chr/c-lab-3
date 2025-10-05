#include<stdio.h>
#include<locale.h>

const float INCH = 2.54f;
const float PULGADA = 2.32166f;
int inches;
float cm;

void main() {
	setlocale(LC_CTYPE, "RUS");

	puts("Âגוהטעו ה‏ילû");
	scanf_s("%d", &inches);
	cm = INCH * inches;
	printf("%d ה‏יל = %3.1f סל\n", inches, cm);

	puts("Âגוהטעו ןףכüדאהû");
	scanf_s("%d", &inches);
	cm = PULGADA * inches;
	printf("%d ןףכüדאה = %3.1f סל\n", inches, cm);
}