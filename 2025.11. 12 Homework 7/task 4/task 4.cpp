#include<cstdio>

bool prost(int a);
int main(int argc, char** argv)
{
	int a = 0;
	scanf_s("%d", &a);
	if (prost(a))
	{
		printf("prime");
	}
	else
	{
		printf("composite");
	}
}
bool prost(int a)
{
		if (a == 2)
		{
			return true;
		}
		if (a % 2 == 0)
		{
			return false;
		}
		for (int i = 2; i < a; i += 2)
		{
			if (a % i == 0)
			{
				return false;
			}
		}
		return true;
}