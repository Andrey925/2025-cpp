#include <cstdio>

int main(int argc, char** argv)
{
    int a, b, c;
    scanf_s("%d %d %d", &a, &b, &c);

    if (a == 0 && b == 0 && c == 0)
    {
        printf("0\n");
        return 0;
    }
    bool first = true;
    if (a != 0)
    {
        if (a < 0) 
        {
            printf("-");
            printf("%d", -a);  
        }
        else 
        {
            printf("%d", a);   
        }
        first = false;
    }
    if (b != 0)
    {
        if (first) {
            if (b < 0)
            {
                printf("-");
            }
        }
        else {
            if (b > 0) 
            {
                printf("+");
            }
            else {
                printf("-");
            }
        }

        if (b == 1 || b == -1) 
        {
            printf("x");
        }
        else 
        {
            printf("%dx", (b < 0 ? -b : b));
        }
        first = false;
    }
    if (c != 0)
    {
        if (first)
        {
            if (c < 0) 
            {
                printf("-");
            }
        }
        else 
        {
            if (c > 0) 
            {
                printf("+");
            }
            else 
            {
                printf("-");
            }
        }
        if (c == 1 || c == -1)
        {
            printf("y");
        }
        else 
        {
            printf("%dy", (c < 0 ? -c : c));
        }
        first = false;
    }
    printf("\n");
    return 0;
}