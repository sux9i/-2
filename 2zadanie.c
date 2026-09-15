#include <stdio.h>
#include <locale.h>
int main()
{
	int N = 16;
	int K = 30;
	int Y = N * 60 + K;
	int O = (N - 8) * 3600 + K * 60;
	setlocale(LC_CTYPE, "RUS");
	printf("Сейчас %d часов %d минут 00 секунд\n", N, K);
	printf("Идет %d минута суток\n", Y);
	printf("До полуночи осталось %d часов и %d минут\n", N, K);
	printf("С 8.00 прошло %d секунд\n", O);
	printf("Текущий час  = %d суток  и текущая минута =  %d часа\n", N, O);
}