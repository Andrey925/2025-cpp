#include <cstdio>
int main() {
    long long N, K;
    scanf("%lld %lld", &N, &K);
    long long count_per_student = K / N;
    long long in_basket = K % N;
    long long unhappy = (K % N == 0) ? 0 : (N - (K % N));
    printf("%lld %lld %lld\n", count_per_student, in_basket, unhappy);
    return 0;
}