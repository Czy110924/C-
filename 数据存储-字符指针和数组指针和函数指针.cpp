//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//
//
////int main()
////{
////	const char* p = "abcdef";//��������ַ���ַ
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
////		printf("%s\n", parr[i]);//����Ҫ��ӡ�ַ���ʱ��
////								//printf������㴫�ĵ�ַ���ϴ�ӡֱ���ҵ�\0
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
////	printf("��������������������");
////	scanf("%d %d", &a, &b);
////	int ret = ptr(a, b);
////	printf("%d\n", ret);
////}
//
//
////int main()
////{
////
////	//����ָ��
////	/*int (*pt)(int, int) = add;
////	int ret = pt(2, 3);
////	printf("%d", ret);*/
////
////
////	//�Ӽ��˳�����
////	//�ú���ָ����õķ�ʽ����ֹ��������
////	int input = 0;
////	
////
////	do
////	{
////		menu();
////		printf("��ѡ��ִ�г���");
////		scanf("%d", &input);
////
////		//ʹ�ú���ָ������򻯳���
////		/*int (*ptarr[5])(int, int) = { 0, add, sub, mul, div };
////		if (input == 5)
////		{
////			printf("�˳�����\n");
////			break;
////		}
////		else if (input >= 1 && input < 5)
////		{
////			int a = 0;
////			int b = 0;
////			printf("��������������������");
////			scanf("%d %d", &a, &b);
////			printf("%d", ptarr[input](a, b));
////		}
////		else
////		{
////			printf("�������\n");
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
////				printf("�������\n");
////				break;
////		}*/
////
////
////	} while (input);
////	
////	//ͨ������ָ�����͵����������ú���
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
//	//ָ�򡾺���ָ�����顿��ָ��
//	int (*ptrarr[4])(int, int) = { add, sub, mul, div };
//		//�Ⱥ�[]��ϱ�ʾ�Ǹ�����
//		//int (*)(int, int)����ȥ���Ѿ��жϵĿ����Ǻ���ָ�����͵�����
//	
//
//
//
//	//�ڴ˻����Ͻ��и���
//	int (*(*pptrarr)[4])(int, int) = &ptrarr;
//		//���*��ϱ�ʾ�Ǹ�ָ�룬�ٺ�[]��ϱ�ʾ�Ǹ�����˵���Ǹ�����
//		//Ҳ��������ָ�룬ȥ���Ѿ��жϵı��int (*)(int, int)
//		//˵���Ǹ�������ָ�����顿��ָ��
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
