#include <stdio.h> 
#include <stdlib.h>

int main(void)
{
	int i;
	int a[100]; //�ŧi�F�@�ӦW�� a ����ƫ��O�}�C�A���]�t�F100�Ӿ�Ƥ����C
	//a[0] ��ܰ}�C���Ĥ@�Ӥ����Aa[1] ��ܰ}�C���ĤG�Ӥ���
	int b[100];
	for (i=1; i<100; i++)
	{
		b[i]=i;
	}
	a[0]=0;
	for (i=1;i<100;i++)
	{
 		a[i]=b[i]+a[i-1];
	}
		printf("result=%d\n", a[60]-a[50]);
		system("pause");
		return 0;

}
/*
i=1 a[1]=1
i=2 a[2]=2
i=3
i=4
i=5


*/

