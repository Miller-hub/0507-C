#include <stdio.h> 
#include <stdlib.h>
void func(void);
int main(void)
{
	func();
	func();
	func();
	func();
	system("pause");
	return 0;
	 
}
void func(void)
{
	static int a=100; 
	//a �O�@���R�A�ܼơA�b��Ƥ����w�q���R�A�ܼƥu�|��l�Ƥ@���C
	//��� func() �Q�I�s�F�|���A�� a �u�|�b�Ĥ@���I�s�ɳQ��l�Ƭ� 100�A
	//���᪺�I�s�� a ���ȳ��O�b�W�@���I�s����¦�W�W�[ 200�C
	printf("In func() function, a=%d\n", a);
	a=a+200;
}
/*
�ϰ��ܼƻP�����ܼ� 
*/
