#include<cstdio>

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a,&b);
	printf("%d", ((a + 1) / 2) * ((b + 1) * 2));
	return 0;
}