#include <stdio.h>
int main()
{//本代码用来解释第16、17两行代码的区别
	int *p1, *p2;
	int a = 10, b = 20, c = 40;
	p1 = &a;	//p1指向a
	p2 = &b;	//p2指向b
	//*p2 = b;
	printf("a的值为:%d     c的值为:%d\n", a, c);
	printf("p1的值为:%d\n", *p1);
	printf("a的地址为:%p\n", &a);
	printf("p1的地址为:%p\n", p1);
	if (p2 == &b)
		printf("p2与b的地址均为%p\n\n\n", p2);
	
	p1 = &c;	//p1由指向a 变为指向c
	*p2 = c;	//p2指向的变量的值变为40，此时p2依然指向b
	printf("经过运算后。。。。。。。。\n");
	printf("a的值没变，依然为：%d\n", a);
	printf("p1的值变为：%d\n", *p1);
	printf("p2的值也变为：%d\n", *p2);
	printf("b的值跟着p2变为了：%d\n", b);
	printf("c的地址为：%p\n", &c);
	printf("p1的地址变为了：%p\n", p1);
	printf("p2的地址没变，依然为：%p\n", p2);

}