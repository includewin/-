//教材 P 137 例5.9
#include <stdio.h>
int main()  
{	
	int i, n;
	printf("请输入一个数：");
	scanf("%d", &n);
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			printf("不是素数\n");
			break;
		}
	}
	if (i == n)
		printf("是素数\n");
}