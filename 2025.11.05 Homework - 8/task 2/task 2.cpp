#include<cstdio>
#include<string.h>

unsigned char ToUpper(unsigned char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return c -32;
	}
	return c;
}
int main(int argc, char** argv)
{
	unsigned char c;
	c = getchar();
	unsigned char result = ToUpper(c);
	putchar(result);	
	return 0;
}
