//�̲� P 183 ��7.5
#include <stdio.h>
int main()  
{
	int max2(int x,int y);					//��������max2������ѡ���������е��������
	int max4(int a, int b, int c, int d);	//��������max4������ѡ���ĸ����е��������
	int a, b, c, d, m;
	printf("�������ĸ�����ֵ��\n");
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
	int max2(int x, int y);  //����man2����
	int m;
	m = max2(a, b);  //��ʱm��ֵΪa, b�е����ֵ 
	m = max2(m, c);  //��ʱm��ֵ��Ϊa, b, c�е����ֵ
	m = max2(m, d);  //��ʱm��ֵ��Ϊa, b, c, d�е����ֵ
	return m;
}