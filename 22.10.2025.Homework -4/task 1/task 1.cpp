#include<cstdio>

int main(int argc, char** argv)
{
	int n = 0;
	scanf_s("%d", &n);
	int arr[1000];
	int i = 0;
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	int x = 0;
	scanf_s("%d", &x);
	int m = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == x)
		{
			m++;
		}
	}
	printf("%d", m);
	return 0;
}