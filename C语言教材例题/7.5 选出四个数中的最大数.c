//教材 P 183 例7.5
#include <stdio.h>
int main()  
{
	int max2(int x,int y);					//声明函数max2（用于选出两个数中的最大数）
	int max4(int a, int b, int c, int d);	//声明函数max4（用于选出四个数中的最大数）
	int a, b, c, d, m;
	printf("请输入四个数的值：\n");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	m = max4(a, b, c, d);
	printf("%d\n", m);
}

int max2(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int max4(int a, int b, int c, int d)
{
	int max2(int x, int y);  //声明man2函数
	int m;
	m = max2(a, b);  //此时m的值为a, b中的最大值 
	m = max2(m, c);  //此时m的值变为a, b, c中的最大值
	m = max2(m, d);  //此时m的值变为a, b, c, d中的最大值
	return m;
}