#include<cstdio>
#include<string.h>

int IsDigit(unsigned char c)
{
    return c >= '0' && c <= '9';
}

int main(int argc, char** argv) 
{
    char c = getchar();

    if (IsDigit(c))
    {
        puts("yes");
    }
    else 
    {
        puts("no");
    }

    return 0;
}



