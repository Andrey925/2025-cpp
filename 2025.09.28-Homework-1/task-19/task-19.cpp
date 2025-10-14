#include<cstdio>

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);
	if(a % b == 0 || b % a == 0)
	{
		printf("1\n");
	}
	else
	{
		printf("666\n");
	}
	return 0;
}