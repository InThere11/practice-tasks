#include <stdio.h>

int main() {
    int p;
    scanf("%d", &p);

    if (p == 1) {
        printf("2\n");
        return 0;
    }

    long long dp[31];
    dp[1] = 2;
    dp[2] = 4;

    for (int i = 3; i <= p; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }

    printf("%lld\n", dp[p]);

    return 0;
}
