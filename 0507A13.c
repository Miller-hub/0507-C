#include <stdio.h> 
#include <stdlib.h>
#define SIZE 5
void show(int arr[]);
int main(void)
{
	int CC[SIZE]={8, 5, 7, 6, 9};
	printf("The contents of the array: ");
	show(CC);
	system("pause");
	return 0;	 
}
void show(int arr[])
{
	int i;
	for (i=0; i<SIZE; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

