#include<cstdio>

int main(int argc, char** argv)
{
	int v = 0;
	int t = 0;
	scanf_s("%d %d", &v, &t);
	int s = 0;
	s = 109 - (1 + v * t);
	if (s < 0)
	{
		s = -s;
	}
	printf("%d", s);
	return 0;
}