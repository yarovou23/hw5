#include <stdio.h>
#include <math.h>

int main()
{
    double x, y, F;
    double d = 1;

    printf("Введите x: ");
    scanf("%lf", &x);

    printf("Введите y: ");
    scanf("%lf", &y);

    F = (pow(cos(y), 3) + pow(2, x) * d) /
        (exp(y) + log(pow(sin(x), 2) + 7.4));

    printf("F = %lf\n", F);

    return 0;
}