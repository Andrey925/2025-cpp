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
	double dis_x;
	double dis_y;
	double distance;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			dis_x = point1[i].x - point1[j].x;
			dis_y = point1[i].y - point1[j].y;
			 distance = sqrt(dis_x * dis_x + dis_y * dis_y);
			 if (max_distance < distance)
			 {
				 max_distance = distance;
			 }
		}
	}
	printf("%.15g", max_distance);
	return 0;
}