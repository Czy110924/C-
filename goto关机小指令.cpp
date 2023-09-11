#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//shutdown -s -t 60,60秒后关机
//shutdown -a取消关机




//int main()
//{
//	//死循环，跳到goto指定的目标，不建议使用,用于跳出多层嵌套语句
// goto不能跨函数跳转，只能在函数内跳转
//flag:
//	printf("hhhhh");
//	goto flag;
//	return 0;
//}


int main()
{
	char arr[20] = { 0 };
	system("shutdown -s -t 60");

	printf("注意！你的电脑将在六十秒后关机，请在六十秒内输入‘我是猪’来解除关机指令\n");
	scanf("%s", arr);
again:
	if (strcmp(arr, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}


	return 0;
}