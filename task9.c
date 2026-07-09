#include <stdio.h>
#include <math.h>

int main() {
    long long x, y;

    printf("Введіть значення x та y через пробіл: ");
    scanf("%lld %lld", &x, &y);

    long long d = y - x;

    if (d == 0) {
        printf("Кількість кроків: 0\n");
        return 0;
    }

    long long m = (long long)sqrt(d);
    long long steps;

    if (d == m * m) {
        steps = 2 * m - 1;
    } else if (d <= m * m + m) {
        steps = 2 * m;
    } else {
        steps = 2 * m + 1;
    }

    printf("Кількість кроків: %lld\n", steps);

    return 0;
}
