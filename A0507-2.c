#include <stdio.h> 
#include <stdlib.h>
int fac(int);
int main(void)
{
	printf("fac(5)=%d\n", fac(5));
	system("pause");
	return 0;
}
int fac(int n)
{
	if (n>=1){
		return (n*fac(n-1));
	}
	else{
		return 1; 
	}
}
