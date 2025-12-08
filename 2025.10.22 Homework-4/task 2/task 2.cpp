#include<cstdio>

int main(int argc, char** argv)
{
	int n = 0;
	scanf_s("%d", &n);
	int arr[1001] = { 0 };
	for (int i = 1; i <= n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	int l = 0;
	int r = 0;
	scanf_s("%d %d", &l, &r);
	int maxin = 0;
	maxin = l;
	int max = 0;
	max = arr[l];
	for (int i = l; i <= r; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			maxin = i;
		}
	}
	printf("%d %d", max, maxin);
	return 0;
}