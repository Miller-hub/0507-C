#include <stdio.h> 
#include <stdlib.h>
int main(void)
{
	char str[15]="This is a pen";
	char str1[15];
	char str2[15];
	char str3[20]="Hay! ";
	printf("str: \"%s\"\n", str);
	strcpy(str1, "This is a book");
	strcpy(str2, str);
	printf("str1:\"%s\"\n", str1);
	printf("str2:\"%s\"\n", str2);
	strcat(str3, str1);
	printf("str3:\"%s\"\n", str3);
	system("pause");
	return 0;

}
