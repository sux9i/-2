#include <stdio.h>
#include <locale.h>
main()
{
    setlocale(LC_ALL, "RUS");
    int x = 500; // Ставка за час
    int a = 45;  // Отработано часов
    int zp = (38 * x) + ((a - 38) * 3 * x) / 2;
    printf("Дано: \nСтавка: %d руб/час \nОтработано: %d часов", x, a);
    printf("\n\nОтвет: %.2f руб.", zp * 1.0);
}
