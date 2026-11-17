#include <stdio.h>
#include <math.h>

double diff_of_abs(double a, double b) {
    return fabs(a) - fabs(b);
}

int main(void) {
    double x, y;
    printf("Введите две пары чисел через пробел:\n");

    while (printf("Ввод: ") && scanf("%lf %lf", &x, &y) == 2) {
        double result = diff_of_abs(x, y);
        printf("Результат разности модулей: %.4f\n\n", result);
    }

    printf("Программа завершена.\n");
    return 0;
}
