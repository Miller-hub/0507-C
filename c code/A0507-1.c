#include <stdio.h> 
#include <stdlib.h>
#define CUBIC(X) ((X)*(X)*(X))

int main(void)
{
    double X;
    printf("��J�Ʀr: ");
    scanf("%lf", &X);
    printf("%f���T����=%lf\n", X, CUBIC(X)); 
    
    system("pause");
    return 0;
}


