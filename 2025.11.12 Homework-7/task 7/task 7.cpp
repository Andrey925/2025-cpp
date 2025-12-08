#include<cstdio>

int fi(int n)
{
    if (n == 0 || n == 1) 
    {
        return 1;
    }
    int p1 = 1; 
    int p2 = 1; 
    int current  = 0;
    for (int i = 2; i <= n; i++)
    {
        current = p1 + p2;
        p2 = p1;
        p1 = current;
    }
    return current;
}
	
int main(int argc, char** argv)
{
	int n = 0;
	scanf("%d", &n);
    printf("%d", fi(n));
	return 0;
}