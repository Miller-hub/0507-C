#include <stdio.h> 
#include <stdlib.h>
void func(void);
int a=5;
int main(void)
{
	a=10;
	printf("Before call func(), a=%d\n", a);
	func();
	printf("After call func() , a=%d\n", a);
	system ("pause");
	return 0;
	 
}
void func(void)
{
	a=15;
	printf("In func() function, a=%d\n", a);
}
/*
跋办跑计籔办跑计 
*/
