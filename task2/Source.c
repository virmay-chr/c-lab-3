#include<stdio.h>
#include<locale.h>

const float INCH = 2.54f;
const float PULGADA = 2.32166f;
int inches;
float cm;

void main() {
	setlocale(LC_CTYPE, "RUS");

	puts("������� �����");
	scanf_s("%d", &inches);
	cm = INCH * inches;
	printf("%d ���� = %3.1f ��\n", inches, cm);

	puts("������� ��������");
	scanf_s("%d", &inches);
	cm = PULGADA * inches;
	printf("%d ������� = %3.1f ��\n", inches, cm);
}