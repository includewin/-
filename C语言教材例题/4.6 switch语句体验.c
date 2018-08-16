//教材 P 102 例4.6
//题目：输入一个字符，若是大写字母则转化为小写字母，如为小写字母则不转化
#include <stdio.h>
int main()  
{
	char c;
	printf("请输入成绩等级(A,B,C,D)：");
	scanf("%c", &c);
	switch (c)
	{
	case 'A':printf("85-100\n"); break;
	case 'B':printf("70-84\n"); break;
	case 'C':printf("60-69\n"); break;
	case 'D':printf("<60\n"); break;
	default:printf("仔细看看代码！！你输入的这是什么玩意儿！！\n");
	}
}

