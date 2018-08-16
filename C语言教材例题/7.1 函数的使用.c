//教材 P 171 例7.1
#include <stdio.h>
int main()  
{
	//声明函数
	void star();
	void message();
	//调用函数
	star();
	message();
	star();
}

void star()
{
	printf("*************\n");
}

void message()
{
	printf("Hello World!\n");
}