#include<cstdio>

int main(int argc, char** argv)
{
	int n = 0;
    scanf_s("%d", &n);

    if (n == 0) 
    {
    printf("0");
    }
    else if (n == 1)
    {
     printf("1");
    }
    else 
    {
        int a = 0, b = 1;
        int i = 2;
        while (i <= n)
        {
            int temp = a + b;
            a = b;
            b = temp;
            i++;
        }
        printf("%d", b);
    }
	return 0;
}