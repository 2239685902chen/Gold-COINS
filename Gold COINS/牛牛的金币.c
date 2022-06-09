#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int x = 0, y = 0, x1 = 0, y1 = 0;
	scanf("%d%d", &x, &y);
	scanf("%d%d", &x1, &y1);
	if (!(x - x1) && y < y1)
	{
		printf("u\n");
	}
	else if (!(x - x1) && y > y1)
	{
		printf("d\n");
	}
	else if (!(y - y1) && x < x1)
	{
		printf("r\n");
	}
	else if (!(y - y1) && x > x1)
	{
		printf("l\n");
	}
	return 0;
}