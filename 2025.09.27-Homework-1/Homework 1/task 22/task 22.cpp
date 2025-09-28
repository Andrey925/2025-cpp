#include <cstdio>
#include <cstdlib>
int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    long long r = a % b;
    if (r < 0) {
        r += abs(b);
    }
    printf("%lld\n", r);
    return 0;
}