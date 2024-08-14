#include <stdio.h> 
#include <stdlib.h>

int main(void)
{
	int i;
	int a[100]; //宣告了一個名為 a 的整數型別陣列，它包含了100個整數元素。
	//a[0] 表示陣列的第一個元素，a[1] 表示陣列的第二個元素
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

