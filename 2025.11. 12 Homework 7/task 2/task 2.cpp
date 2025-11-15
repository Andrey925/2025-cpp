#include<cstdio>

double power(double a, int n);
int main(int argc, char** argv)
{
    double a;
    int n;
    scanf("%lf %d", &a, &n);
    printf("%.0lf\n", power(a, n));
	return 0;
}
double power(double a, int n)
{
    double res = 1.0;
    while (n > 0) 
    {
        if (n % 2 == 1) 
        {
            res *= a;
        }
        a *= a;
        n = n / 2;
    }
    return res;
}