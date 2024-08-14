#include <stdio.h> 
#include <stdlib.h>

int main(void) {
    int a, b;
    printf("Please input two numbers: \n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
	
    mod(a, b);

    system("pause");
    return 0;
}
void mod(int a, int b) 
{
    printf("%d x %d = %d\n", a, b, a * b);
}
