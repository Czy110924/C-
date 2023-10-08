//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//
//
////int main()
////{
////	const char* p = "abcdef";//存的是首字符地址
////	const char* p1 = "r";
////	printf("%s\n", p); 
////	printf("%c\n", p1);
////	return 0;
////}
//
//
//
////int main()
////{
////	const char* p1 = "asdf";
////	const char* p2 = "asdf";
////
////	char arr1[] = "asdf";
////	char arr2[] = "asdf";
////
////	if (p1 == p2)
////	{
////		printf("p1 == p2");
////	}
////	else
////	{
////		printf("p1 != p2");
////	}
////
////	if (arr1 == arr2)
////	{
////		printf("arr1 == arr2");
////	}
////	else
////	{
////		printf("arr1 != arr2");
////	}
////	return 0;
////}
//
////int main()
////{
////	const char* a = "asdf";
////	const char* b = "sdfg";
////	const char* c = "dfgh";
////
////	const char* parr[] = { a, b, c };
////	for (int i = 0; i < 3; i++)
////	{
////		printf("%s\n", parr[i]);//当你要打印字符串时，
////								//printf会根据你传的地址不断打印直到找到\0
////	}
////
////	return 0;
////}
//
//
//
//void menu()
//{
//	printf("*******************************\n");
//	printf("******   1.add    2.sub *******\n");
//	printf("******   3.mul    4.dif *******\n");
//	printf("******   5.exit         *******\n");
//	printf("*******************************\n");
//}
//
//int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a * b;
//}
//int div(int a, int b)
//{
//	return a / b;
//}
////void calm(int (*ptr)(int, int))
////{
////	
////	int a = 0;
////	int b = 0;
////	printf("请输入两个操作数：》");
////	scanf("%d %d", &a, &b);
////	int ret = ptr(a, b);
////	printf("%d\n", ret);
////}
//
//
////int main()
////{
////
////	//函数指针
////	/*int (*pt)(int, int) = add;
////	int ret = pt(2, 3);
////	printf("%d", ret);*/
////
////
////	//加减乘除函数
////	//用函数指针调用的方式，防止代码冗余
////	int input = 0;
////	
////
////	do
////	{
////		menu();
////		printf("请选择执行程序");
////		scanf("%d", &input);
////
////		//使用函数指针数组简化程序
////		/*int (*ptarr[5])(int, int) = { 0, add, sub, mul, div };
////		if (input == 5)
////		{
////			printf("退出程序\n");
////			break;
////		}
////		else if (input >= 1 && input < 5)
////		{
////			int a = 0;
////			int b = 0;
////			printf("请输入两个操作数：》");
////			scanf("%d %d", &a, &b);
////			printf("%d", ptarr[input](a, b));
////		}
////		else
////		{
////			printf("输入错误\n");
////		}*/
////
////
////
////
////
////		/*switch (input)
////		{
////			case 1:
////				calm(add);
////				break;
////			case 2:
////				calm(sub);
////				break;
////			case 3:
////				calm(mul);
////				break;
////			case 4:
////				calm(div);
////				break;
////			case 5:
////				break;
////			default:
////				printf("输入错误\n");
////				break;
////		}*/
////
////
////	} while (input);
////	
////	//通过函数指针类型的数组来调用函数
////	/*int (*arr[4])(int, int) = { add, sub, mul, div };
////	for (int i = 0; i < 4; i++)
////	{
////		int ret = arr[i](2, 4);
////		printf("%d\n", ret);
////	}*/
////	
////
////
////
////
////
////	return 0;
////}
//
//
//
//
//
//
//int main() {
//	
//	//指向【函数指针数组】的指针
//	int (*ptrarr[4])(int, int) = { add, sub, mul, div };
//		//先和[]结合表示是个数组
//		//int (*)(int, int)，再去掉已经判断的看出是函数指针类型的数组
//	
//
//
//
//	//在此基础上进行更改
//	int (*(*pptrarr)[4])(int, int) = &ptrarr;
//		//向和*结合表示是个指针，再和[]结合表示是个数组说明是个数组
//		//也就是数组指针，去掉已经判断的变成int (*)(int, int)
//		//说明是个【函数指针数组】的指针
//
//	return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
