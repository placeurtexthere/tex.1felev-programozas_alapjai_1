#include <stdio.h>
int n, k;

int gcd(int a, int b) {
    while (b > 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int relative_primes(int lko) {
    if (lko == 1) return 1;
}

int main() {
    int mennyi = 0;
    while (scanf("%d %d", &n, &k) == 2) {
        //printf("%d", gcd(n,k));
        if (relative_primes(gcd(n,k)) == 1) mennyi++;
    }
    printf("%d", mennyi);
    return 0;
}
