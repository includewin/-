//教材 P 8 例1.3
#include <stdio.h>
int main()
{
	int a, b, max;
	printf("请输入两个数值：\n");
	scanf("%d %d", &a, &b);
	max = a > b ? a : b;
	printf("最大值为：%d\n", max);
	return 0;
}