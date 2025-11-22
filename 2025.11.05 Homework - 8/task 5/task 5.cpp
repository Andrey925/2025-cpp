#include<cstdio>
#include<string.h>

int main(int argc, char** argv)
{
	char str[100];
	int count = 0;
	fgets(str, sizeof(str), stdin);
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}