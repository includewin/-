//�̲� P 102 ��4.6
//��Ŀ������һ���ַ������Ǵ�д��ĸ��ת��ΪСд��ĸ����ΪСд��ĸ��ת��
#include <stdio.h>
int main()  
{
	char c;
	printf("������ɼ��ȼ�(A,B,C,D)��");
	scanf("%c", &c);
	switch (c)
	{
	case 'A':printf("85-100\n"); break;
	case 'B':printf("70-84\n"); break;
	case 'C':printf("60-69\n"); break;
	case 'D':printf("<60\n"); break;
	default:printf("��ϸ�������룡�������������ʲô���������\n");
	}
}

