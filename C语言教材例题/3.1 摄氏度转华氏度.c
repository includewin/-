//教材 P 37 例3.1
#include <stdio.h>
int main()
{
	float c, f;
	printf("请输入温度值（华氏度）：");
	scanf("%f", &f);
	c = 5.0 / 9 * (f - 32);    //int型除以int型结果会去掉小数部分,所以分子要用float型的5.0（只能改分子，分母什么型不用管）
	printf("对应摄氏度为：%f\n", c);
	return 0;
}