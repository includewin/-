//教材 P 153 例6.5
//教材上有解题思路
#include <stdio.h>
int main()  
{
	int a[3][4] = { {1, 2, 3, 4},{9, 8, 7 ,6},{-10, 10, -5, 2} }; //定义一个数组并初赋值
	int i, j;							//定义循环控制变量
	int row, list, max = 0;				//row记录是第几行，list记录是第几列，max记录最大数的数值（默认为0）
	for(i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)			//两层循环遍历整个二维数组
			if (max < a[i][j])          //如果当前遍历的数比max中记录的大，就用该数取代max中记录的数值
			{
				max = a[i][j];			//记录该数数值
				row = i;				//记录行号
				list = j;				//记录列号
			}
	printf("数值最大的为：%d\n行号：%d\n列号：%d\n", max, row, list);
}