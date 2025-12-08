#include<cstdio>

int main(int argc, char** argv)
{
	int a = 0;
	int p = 0;
	scanf_s("%d %d", &p,&a);
	int first = 0;
	first = a / p;
	int second = 0;
	second = a % p;
	int third = 0;
	third = (a % p == 0) ? 0: (p - a % p);
	printf("%d %d %d", first, second, third);
	return 0;
}