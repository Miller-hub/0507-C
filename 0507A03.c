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

�o�q�{���X�����ŧi�F��Ӧr���}�C str1 �M str2�A���O�x�s�F�r�� "xyz" �M "abcdef"�C

���ۨϥ� printf �禡��X str1 �����e�C

�M��ϥ� strcat �禡�N str2 ���[�� str1 �������A�Y�N "abcdef" �K�[�� "xyz" �᭱�C

�̫�A���ϥ� printf �禡��X�X�᪺֫ str1 �����e�C

strcat �禡���@�άO�N�ĤG�Ӧr����[��Ĥ@�Ӧr�ꪺ�����A�ê�^���[�᪺�r��C
*/
