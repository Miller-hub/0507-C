#include <stdio.h> 
#include <stdlib.h>
void add20(int, int);
int main(void)
{
	int a=33;
	int b=55; 
	printf("Before call add20() function: ");
	printf("a=%d, b=%d\n", a, b);
	add20(a,b);
	printf("After call add20() function: ");
	printf("a=%d, b=%d\n", a, b);
	system ("pause");
	return 0;
	 
}
void add20(int a, int b)
{
	printf("���ɭȬ�%d %d\n", a, b);
	a=a+20; //�B�⧹��|�Q���� 
	b=b+20;
	printf("���ɭȬ�%d %d\n", a, b);
}

