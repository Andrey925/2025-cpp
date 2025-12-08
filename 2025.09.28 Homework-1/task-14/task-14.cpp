#include<cstdio>

int main(int argc, char** argv)
{
	int a = 0;
	scanf_s("%d", &a);
	int b = 0;
	b = a / 10;
	int p = 0;
	p = b * (b + 1);
	printf("%d", p * 100 + 25);
	return 0;
}