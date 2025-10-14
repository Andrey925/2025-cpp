#include <cstdio>

int main(int argc, char** argv)
{
    long long a, b;
    scanf_s("%lld %lld", &a, &b);
    printf("%lld", a < b ? a : b);
    return 0;
}