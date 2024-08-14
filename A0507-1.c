#include <stdio.h> 
#include <stdlib.h>
#define CUBIC(X) ((X)*(X)*(X))

int main(void)
{
    double X;
    printf("輸入數字: ");
    scanf("%lf", &X);
    printf("%f的三次方=%lf\n", X, CUBIC(X)); 
    
    system("pause");
    return 0;
}


