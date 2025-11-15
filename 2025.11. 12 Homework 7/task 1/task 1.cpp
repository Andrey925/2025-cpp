#include <cstdio>

int min(int a, int b, int c, int d);
int main() 
{
    int a, b, c, d;
    scanf_s("%d %d %d %d", &a, &b, &c, &d);
    printf("%d", min(a, b, c, d));
    return 0;
}
int min(int a, int b, int c, int d)
{
    int min = 100000;
    if (a < min)
    {
        min = a;
    }
    if (b < a)
    {
        min = b;
    }
    if (c < b)
    {
        min = c;
    }
    if (d < a)
    {
        min = d;
    }
    return min;
}