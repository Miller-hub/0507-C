#include <stdio.h> 
#include <stdlib.h>

int main(void)
{
	int i;
	int j;
	for (i=0;i<9;i++)
	{
		for (j=9;j>=1;j--)
		{
		printf("%d\n", &j);	
		}
	}
	
	system("pause");
	return 0;
}







/*
#include <stdio.h> 
#include <stdlib.h>
void kitty(int);
int main(void)
{
	int k;	
	printf("請輸入要重複幾次\n");
	scanf("%d", &k);
	display(k);
	
	system("pause");
	return 0;
}
void display(int k)
{
	int i;
	for(i=0;i<k;i++)
	{
		printf("Hello Kitty\n");		
	}
	printf("\n");
}

*/


