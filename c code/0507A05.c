#include <stdio.h> 
#include <stdlib.h>
void func(void);
int main(void)
{
	int a=100;//���D�{������ 
	printf("Before call func(), a=%d\n", a);
	func();
	printf("After call func() , a=%d\n", a);
	system ("pause");
	return 0;
	 
}
void func(void)
{
	//printf("���ɭȬ�%d",a);
	int a=300;//�ݥ~�������ܼƵ����ȡA�~���ܼƨS���ȡA�ҥH�ϥ�func������
	printf("In func() function, a=%d\n", a);
	printf("���ɭȬ�%d\n",a);
}
/*
�ϰ��ܼƻP�����ܼ� 
*/
