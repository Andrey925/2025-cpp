#include<cstdio>

int main(int argc, char** argv)
{
	int m = 0;
	scanf_s("%d", &m);
	printf("The next number for the number %d is %d.\n", m, m + 1);
	printf("The next previous for the number %d is %d.\n", m, m - 1);
	return 0;
}