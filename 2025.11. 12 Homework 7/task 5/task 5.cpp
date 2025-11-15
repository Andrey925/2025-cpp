#include <cstdio>

double i_power(int a, int n);  

int main(int argc, char** argv)
{
    int a = 0;
    int n = 0;  
    scanf_s("%d %d", &a, &n);  
    printf("%lf", i_power(a, n));
    return 0;
}

double i_power(int a, int n)
{
    double result = 1.0;
    double base = a;  

    if (n < 0) 
    {
        base = 1.0 / base;
        n = -n;
    }

    while (n > 0)
    {
        if (n % 2 == 1) 
        {
            result *= base;
        }
        base *= base;
        n /= 2;
    }

    return result;
}