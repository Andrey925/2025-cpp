#include<cstdio>

int main(int argc, char** argv)
{
    int n = 0;

    scanf_s("%d", &n);

    int now = 0; 
    int max = 0; 

    for (int i = 0; i < n; i++)
    {
        int temp;
        scanf_s("%d", &temp); 

        if (temp > 0)
        {
            now++;
        }
        else if (temp <= 0)
        {
            now = 0;
        }
        if (now > max)
        {
            max = now;
        }
    }
    printf("%d", max);

    return 0;
}