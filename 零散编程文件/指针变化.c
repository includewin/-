#include <stdio.h>
int main()
{//�������������͵�16��17���д��������
	int *p1, *p2;
	int a = 10, b = 20, c = 40;
	p1 = &a;	//p1ָ��a
	p2 = &b;	//p2ָ��b
	//*p2 = b;
	printf("a��ֵΪ:%d     c��ֵΪ:%d\n", a, c);
	printf("p1��ֵΪ:%d\n", *p1);
	printf("a�ĵ�ַΪ:%p\n", &a);
	printf("p1�ĵ�ַΪ:%p\n", p1);
	if (p2 == &b)
		printf("p2��b�ĵ�ַ��Ϊ%p\n\n\n", p2);
	
	p1 = &c;	//p1��ָ��a ��Ϊָ��c
	*p2 = c;	//p2ָ��ı�����ֵ��Ϊ40����ʱp2��Ȼָ��b
	printf("��������󡣡�������������\n");
	printf("a��ֵû�䣬��ȻΪ��%d\n", a);
	printf("p1��ֵ��Ϊ��%d\n", *p1);
	printf("p2��ֵҲ��Ϊ��%d\n", *p2);
	printf("b��ֵ����p2��Ϊ�ˣ�%d\n", b);
	printf("c�ĵ�ַΪ��%p\n", &c);
	printf("p1�ĵ�ַ��Ϊ�ˣ�%p\n", p1);
	printf("p2�ĵ�ַû�䣬��ȻΪ��%p\n", p2);

}