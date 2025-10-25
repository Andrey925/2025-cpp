#include <cstdio>

int main(int argc, char** argv)
{
    int arr[1000];
    int l = 0;
    int r = 0;
    while (l < r)
    {
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
    }
    int n = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    scanf_s("%d %d %d %d %d", &n, &a, &b, &c, &d);
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }
    a--; b--; c--; d--;
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if (i < n - 1)
        {
            printf(" ");
        }
    }
    return 0;
}