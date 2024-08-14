#include <stdio.h> 
#include <stdlib.h>
int cub(int);
{
    int result = 1;
    for (int i = 0; i < 8; i++) 
	{
        result =result*x;
    }
    return result;
}

int cub(int x)
{
    int x;
    printf("%d 的 8 次方為 %d\n", x, cub(x));
    return 0;
}




