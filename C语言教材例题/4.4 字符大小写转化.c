//教材 P 99 例4.4
//题目：输入一个字符，若是大写字母则转化为小写字母，如为小写字母则不转化
#include <stdio.h>
int main()  
{
	char a;
	printf("请输入一个字符：");
	scanf("%c", &a);
	if ((a < 'Z') && (a > 'A'))
		a = a + 32;
	printf("%c\n", a);
}

