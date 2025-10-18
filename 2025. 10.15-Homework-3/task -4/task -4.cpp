#include <cstdio>

int main() 
{
    int a = 0;
    scanf_s( "%d", &a);

    int b = 0;
    int m = 0;
    int p = 0;
    p = a;
    int n = 0;

    do {
        scanf_s("%d", &n);
        if (n == 0) break;

        if (n == p) {
            b++;
        }
        else {
            if (b > m) 
            {
                m = b;
            }
            b = 1;
            p = n;
        }
    } while (n != 0);

    if (b > m)
    {
        m = b;
    }

    printf("%d", m);
    return 0;
}