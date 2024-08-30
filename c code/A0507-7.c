#include <stdio.h> 
#include <stdlib.h>

int main(void)
{
	int i;
	for (i=30; i<=300; i++)
	{
		if (i%105==0)
		{
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}

