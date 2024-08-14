#include <stdio.h> 
#include <stdlib.h>
int fac(int);
int main(void)
{
	printf("fac(4)=%d\n", fac(4));
	system("pause");
	return 0;
}
int fac(int n)
{
	if (n>=1){
		return (n*fac(n-1));
	}
	else{
		return 1; //0¶¥¬O1 
	}
}
/*
fac(4) = 4 * fac(3)
fac(3) = 3 * fac(2)
fac(2) = 2 * fac(1)
fac(1) = 1           //fac(0)=1 

fac(4) = 4 * (3 * (2 * 1))
fac(4) = 4 * (3 * 2)
fac(4) = 4 * 6
fac(4) = 24
*/
