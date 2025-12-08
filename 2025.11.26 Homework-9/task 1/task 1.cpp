#include<cstdio>
#include<cmath>

struct point
{
	int x;
	int y;
};
int main(int argc, char** argv)
{
	int n = 0;
	struct point point1[100];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &point1[i].x, &point1[i].y);
	}
	double max_distance = 0;
	double distance;
	int index = 0;
	for (int i = 0; i < n; i++)
	{
		distance = sqrt(point1[i].x * point1[i].x + point1[i].y * point1[i].y);
		if (distance > max_distance)
		{
			max_distance = distance;
			index = i;
		}
	}
	
	printf("%d %d", point1[index].x, point1[index].y);
	return 0;
}