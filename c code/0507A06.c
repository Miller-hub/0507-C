#include <stdio.h> 
#include <stdlib.h>
void func(void);
int a;
int main(void)
{
	a=100;
	printf("Before call func(), a=%d\n", a);
	func();
	printf("After call func() , a=%d\n", a);
	system ("pause");
	return 0;
	 
}
void func(void)
{
	printf("此時值為%d\n",a);
	a=300;
	printf("In func() function, a=%d\n", a);
	printf("此時值為%d\n",a);
}
/*
區域變數與全域變數 
*/
