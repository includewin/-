//�̲� P 131 ��5.8
#include <stdio.h>
int main()  
{	
	int i, sum;
	int a1 = 1, a2 = 1, n;
	printf("%d\n%d\n", a1, a2);  //ǰ������û�й��ɣ�ֱ�����
	for (i = 3; i <= 40; i++)
	{
		n = a1 + a2;   
		a1 = a2;
		a2 = n;
		printf("%d\n", a2);
	}
}