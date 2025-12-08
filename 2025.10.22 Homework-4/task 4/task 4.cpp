#include <cstdio>
#include <cmath>

int main(int argc, char** argv)
{
    int n = 0;
    scanf_s("%d", &n);

    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        scanf_s("%d", &arr[i]);
    }
    int x = 0;
    scanf_s("%d", &x);
    int closest = arr[0];
    int min = abs(arr[0] - x);
    for (int i = 1; i < n; i++) 
    {
        int current_diff = abs(arr[i] - x);
        if (current_diff < min) 
        {
            min = current_diff;
            closest = arr[i];
        }
        else if (current_diff == min && arr[i] < closest) 
        {
            closest = arr[i];
        }
    }
    printf("%d", closest);
    return 0;
}