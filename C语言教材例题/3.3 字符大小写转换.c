//教材 P 55 例3.3
#include <stdio.h>
int main()
{
	char c1, c2;
	c1 = 'A';
	c2 = c1 + 32;  //所有大写转小写都是ASCII码值加32，小写转大写就是减32
	printf("原字符为：A\n转化后字符变为：%c\n", c2);
	printf("转化后ASCII码值为：%d\n", c2);
	return 0;
}