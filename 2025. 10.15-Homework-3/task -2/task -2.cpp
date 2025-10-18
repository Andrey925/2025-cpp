#include<cstdio>

int main(int argc, char** argv)
{
    int x;
    int y;
    scanf_s("%d %d", &x, &y);
    int day = 0;
    int d = x;
    while (d < y)
    {
        d *= 1.15;
        day++;
    } 
    printf("%d", day);
	return 0;
}