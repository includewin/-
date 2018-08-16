//教材 P 88 例4.3
#include <stdio.h>
int main()
{
	int a, b, c, t;
	printf("请输入三个数：\n");
	scanf("%d %d %d", &a, &b, &c);
	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (b > c)
	{
		t = b;
		b = c;
		c = t;
	}
	if (a > c)
	{
		t = a;
		a = c;
		c = t;
	}
	printf("%d %d %d", a, b, c);
}

