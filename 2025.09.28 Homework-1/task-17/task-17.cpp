#include<cstdio>

int main(int argc, char** argv)
{
	int a = 0;
	scanf_s("%d", &a);
	int b = 0;
	b = a / 100;
	int c = 0;
	c = a  / 10 % 10;
	int v = 0;
	v = a % 10;
	printf("%d", v + b + c);
	return 0;
}