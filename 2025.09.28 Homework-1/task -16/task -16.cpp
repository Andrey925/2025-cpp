#include<cstdio>

int main(int argc, char** argv)
{
	int l = 0;
	scanf_s("%d", &l);
	int m = 0;
	m = l / 10;
	m = m % 10;
		printf("%d", m);
	return 0;
}