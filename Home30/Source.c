#include<stdio.h>
#include<locale.h>
#include<math.h>

const float POUND = 0.4536f;
int kg;
float pounds;
int ounces;

void main() {
	setlocale(LC_CTYPE, "RUS");
	puts("������� ����������");
	scanf_s("%d", &kg);

	pounds = kg / POUND;
	ounces = (pounds - floor(pounds)) * 16;
	printf("%d �� = %d ���� %d �����", kg, (int)pounds, ounces);
}