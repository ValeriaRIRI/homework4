#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "RUS");
	int hero1, hero2, hero3;
	int triple_strike;

	puts("������� ������� ���� ��� ��� ������:");
	scanf("%d", &hero1);
	scanf("%d", &hero2);
	scanf("%d", &hero3);

	triple_strike = (hero1 % 3 == 0) && (hero2 % 3 == 0) && (hero3 % 3 == 0);
	printf("������� ���� ��� ������(1 - ��, 0 - ���): %d", triple_strike);
}