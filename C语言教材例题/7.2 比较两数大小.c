//�̲� P 176 ��7.2
#include <stdio.h>
int main()  
{
	int max();		//��������
	int a, b, c;
	printf("��������������ֵ��\n");
	scanf("%d %d", &a, &b);
	c = max(a, b);
	printf("%d\n", c);
}

int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
