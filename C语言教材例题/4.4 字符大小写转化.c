//�̲� P 99 ��4.4
//��Ŀ������һ���ַ������Ǵ�д��ĸ��ת��ΪСд��ĸ����ΪСд��ĸ��ת��
#include <stdio.h>
int main()  
{
	char a;
	printf("������һ���ַ���");
	scanf("%c", &a);
	if ((a < 'Z') && (a > 'A'))
		a = a + 32;
	printf("%c\n", a);
}

