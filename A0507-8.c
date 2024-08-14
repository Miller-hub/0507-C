#include <stdio.h> 
#include <stdlib.h>

int main(void)
{
	int distance;
	int time;
	int priced;
	int pricet;
	int total_price;
	printf("To compute the price, please enter the distance (m) =>");
	scanf("%d", &distance);
	printf("To compute the price, please enter the time (sec) =>");
	scanf("%d", &time); 
	if (distance-1250<0)
	{
		priced=85;
	}
	else 
	{
		priced=85+(((distance-1250)/200)+1)*5;
	}
	
	if (time-60<0)
	{
		pricet=0;
	}
	else 
	{
		pricet=(((time-60)/60)+1)*5;
	}
	printf("d=%d\n", priced);
	printf("t=%d\n", pricet);
	total_price=priced+pricet;
	
	printf("¨®¶O%d\n", total_price);
	system("pause");
	return 0;
}







