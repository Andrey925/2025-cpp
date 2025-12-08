#include<cstdio>

int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    scanf_s("%d %d", &a, &b);
    int x = 0;
    x = a;
    int y = 0;
    y = b;
    int d = 0;
    while (y != 0)
    {
        d = y;
        y = x % y;
        x = d;
    }
    int g = x;
    long long l = 0;
    l = (long long)a / g * b;
    printf("%lld", l);
    return 0;
}