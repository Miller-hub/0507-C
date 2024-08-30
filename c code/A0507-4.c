#include <stdio.h> 
#include <stdlib.h>

int main(void)
{
	int time;
	int salary;
	printf("輸入工時: ");
	scanf("%d", &time);
	if (time<40)
	{
		salary=time*170;
	}
	else if (time>=40 && time <=80)
	{
		salary=time*170*1.25;
	}
	else
	{
		salary=15300+(time-80)*170*1.5;
	}
	
	printf("薪水為: %d\n", salary);
	system("pause");
	return 0;
}

