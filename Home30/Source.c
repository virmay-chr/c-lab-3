#include<stdio.h>
#include<locale.h>
#include<math.h>

const float POUND = 0.4536f;
int kg;
float pounds;
int ounces;

void main() {
	setlocale(LC_CTYPE, "RUS");
	puts("Введите килограммы");
	scanf_s("%d", &kg);

	pounds = kg / POUND;
	ounces = (pounds - floor(pounds)) * 16;
	printf("%d кг = %d фунт %d унций", kg, (int)pounds, ounces);
}