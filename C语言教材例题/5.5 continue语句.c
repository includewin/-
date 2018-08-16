//教材 P 127 例5.5
//题目：输出100-200间不能被 3 整除的数
#include <stdio.h>
int main()  
{
	int i;
	for (i = 100; i <= 200; i++)
	{
		if (i % 3 == 0)  //判断能否被 3 整除
			continue;	 //若能则跳过此次循环
		printf("%d  ", i);
	}
}