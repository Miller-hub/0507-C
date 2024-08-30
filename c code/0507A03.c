#include <stdio.h> 
#include <stdlib.h>

int main(void)
{
	char str1[]="xyz";
	char str2[]="abcdef";
	printf("str1:%s\n",str1);
	strcat(str1, str2);
	printf("str1:%s\n",str1);
	system("pause");
	return 0;

}
/*

這段程式碼首先宣告了兩個字元陣列 str1 和 str2，分別儲存了字串 "xyz" 和 "abcdef"。

接著使用 printf 函式輸出 str1 的內容。

然後使用 strcat 函式將 str2 附加到 str1 的末尾，即將 "abcdef" 添加到 "xyz" 後面。

最後再次使用 printf 函式輸出合併後的 str1 的內容。

strcat 函式的作用是將第二個字串附加到第一個字串的末尾，並返回附加後的字串。
*/
