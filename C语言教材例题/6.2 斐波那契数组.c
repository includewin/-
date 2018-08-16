//½Ì²Ä P 146 Àý6.2
#include <stdio.h>
int main()  
{
	int i, a[40];
	a[0] = 1;
	a[1] = 1;
	for (i = 2; i < 40; i++)
		a[i] = a[i - 1] + a[i - 2];
	for (i = 0; i < 40; i++)
		printf("%d\n", a[i]);
}