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
	printf("此時值為%d %d\n", a, b);
	a=a+20; //運算完後會被釋放 
	b=b+20;
	printf("此時值為%d %d\n", a, b);
}

