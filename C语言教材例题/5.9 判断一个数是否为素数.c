//�̲� P 137 ��5.9
#include <stdio.h>
int main()  
{	
	int i, n;
	printf("������һ������");
	scanf("%d", &n);
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			printf("��������\n");
			break;
		}
	}
	if (i == n)
		printf("������\n");
}