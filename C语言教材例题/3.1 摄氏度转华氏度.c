//�̲� P 37 ��3.1
#include <stdio.h>
int main()
{
	float c, f;
	printf("�������¶�ֵ�����϶ȣ���");
	scanf("%f", &f);
	c = 5.0 / 9 * (f - 32);    //int�ͳ���int�ͽ����ȥ��С������,���Է���Ҫ��float�͵�5.0��ֻ�ܸķ��ӣ���ĸʲô�Ͳ��ùܣ�
	printf("��Ӧ���϶�Ϊ��%f\n", c);
	return 0;
}