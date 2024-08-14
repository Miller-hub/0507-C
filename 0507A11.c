#include <stdio.h> 
#include <stdlib.h>
#define MAX 3
#define LENGTH 10
int main(void)
{
	char arr1[MAX][LENGTH]={"Tom", "Jerry", "James"};
	char arr2[MAX][LENGTH];
	int i, j;
	for (i=0; i<MAX; i++)
	{
		for (j=0; j<LENGTH; j++)
		{
			if(arr1[i][j]=='\0')
			{
				break;
			}
			else
			{
				arr2[i][j]=arr1[i][j];
			}
		}
		arr2[i][j]='\0';
	}
	for (i=0; i<MAX; i++)
	{
		printf("arr2[%d]=%s\n", i, arr2[i]);
	}
	system("pause");
	return 0;
	 
}
/*
arr1[0][4] == '\0' 表示 "Tom" 字串的結尾。
arr1[1][6] == '\0' 表示 "Jerry" 字串的結尾。
arr1[2][5] == '\0' 表示 "James" 字串的結尾。
因此，arr1 中每個字串的結尾都是以 '\0' 字元表示。
*/
