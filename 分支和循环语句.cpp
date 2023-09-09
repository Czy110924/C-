#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
	//C语言是结构化的程序设计语言，顺序结构，选择结构，循环结构
	//分支语句（if,switch）和循环语句（while,for,do while）
	//什么是语句？C语言中一个分号隔开的就是一条语句
	
	//非零就是真，零就是假，表达式的结果用与判断真假

	//else和最近的if匹配，用{  }完成准确分配
	//所以要有好的代码风格，繁琐也好要便于理解的代码
	//代码小技巧if(5 == num)常量写在左边，这样==写成=时会准确报错，老司机

	//for(int a = 1)这种写代码方式只在C++或C中c99标准支持
	/*int a = 1;
	while (a <= 100)
	{
		if (a % 2 == 1)
		{
			printf("%d\n", a);
		}
		a++;
	}*/

	//int day = 0;
	//scanf("%d", &day);
	////day的值决定从哪个case进入口，前面的不会执行，添加break（非必须）就可以结束语句，break是出口
	//switch (day)//括号内是整形表达式，字符也可以也属于整形的一种，因为字符底层存储的是字符的ASCII码值
	//{
	//	case 1://case后面必须是整型常量表达式
	//	{
	//		printf("星期一");
	//		break;
	//	}
	//	case 2:
	//	{
	//		printf("星期二");
	//		break;
	//	}
	//	case 3:
	//	{
	//		printf("星期三");
	//		break;
	//	}
	//	case 4:
	//	{
	//		printf("星期四");
	//		break;//最有一个break最好加上，好习惯
	//	}
	//	default://default顺序无所谓
	//	{
	//		printf("输入错误");
	//		break;
	//	}
	//}


	//while循环里break意味着永久终止循环
	//while循环里continue会跳过当前这次循环continue后面的代码，可能陷入死循环

	//字符是以ASCII码值储存
	//int ch = getchar(); //从键盘的标准输入读取一个字符返回ASCII码值，若读取错误返回EOF = end of file文件结束标志
	//putchar(ch);//putchar()输出一个字符

	//int ch = 0;
	//while ((ch = getchar()) != EOF)
	//{
	//	//enter也会被读取，所以直接到了第三行，缓冲区
	//	putchar(ch);//CTRL+Z结束代码
	//}
	//return 0;
//}

//int main()
//{
//	char pwd[20] = { 0 };
//	printf("请输入密码");
//	scanf("%s", pwd);//数组的数组名本来就是地址所以不用&符号
//	//缓冲区中输入123456\n，scanf会拿走123456，然后getchar直接把\n拿走了给ch所以失败
//	printf("请确认密码（Y/N）");
//	//清理缓存区可以用getchar
//	//getchar();//处理\n
//
//	//清理缓冲区中多个字符
//	int tmp = 0; 
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("成功");
//	}
//	else
//	{
//		printf("失败");
//	}
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	//判断部分的省略  --  恒为真，三部分都可以省略但不建议会出问题
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d", i);
//	}
//	return 0;
//}