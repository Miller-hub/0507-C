#include <stdio.h> 
#include <stdlib.h>
void func(void);
int main(void)
{
	func();
	func();
	func();
	func();
	system("pause");
	return 0;
	 
}
void func(void)
{
	static int a=100; 
	//a 琌繰篈跑计ㄧ计ず场﹚竡繰篈跑计穦﹍てΩ
	//ㄧ计 func() 砆㊣Ω a 穦材Ω㊣砆﹍て 100
	//ぇ㊣い a 常琌Ω㊣膀娄糤 200
	printf("In func() function, a=%d\n", a);
	a=a+200;
}
/*
跋办跑计籔办跑计 
*/
