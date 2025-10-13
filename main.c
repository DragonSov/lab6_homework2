#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_CTYPE, "RUS");

    double x, y;
    int belonging;

    printf("Введите координаты точки x y: ");
    scanf("%lf %lf", &x, &y);

    belonging = (x >= 2.0) &&
        (4.0 * x + 3.0 * y <= 23.0) &&
        (5.0 * x - 3.0 * y <= 22.0);

    if (belonging)
    {
		printf("Точка (%.1f; %.1f) принадлежит заштрихованной области.\n", x, y);
    }
    else
    {
        printf("Точка (%.1f; %.1f) не принадлежит заштрихованной области.\n", x, y);
    }
    return 0;
}
