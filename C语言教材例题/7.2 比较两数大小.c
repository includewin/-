//教材 P 176 例7.2
#include <stdio.h>
int main()  
{
	int max();		//声明函数
	int a, b, c;
	printf("请输入两个数的值：\n");
	scanf("%d %d", &a, &b);
	c = max(a, b);
	printf("%d\n", c);
}

int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
