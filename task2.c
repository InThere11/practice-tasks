#include <stdio.h>

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int p;
    scanf("%d", &p);

    long long result;
    scanf("%lld", &result);

    long long current;
    for (int i = 1; i < p; i++) {
        scanf("%lld", &current);
        result = lcm(result, current);
    }

    printf("%lld\n", result);

    return 0;
}
