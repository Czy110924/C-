#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//
////�ݹ����Ҫ���������������������ݹ�
////ÿ�εݹ鶼����Խ��Խ�ӽ���������
//
////stack overflowջ���  ����err  
////
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//
//	print(num); //print��ӡ�������ֵ�ÿһλ
//	return 0;
//}

////�������ַ����ĳ���
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//���ַ����ĳ��ȣ����ǲ�������ʱ����
//�ݹ���ֵ
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr[] = "abc";
//	printf("%d", my_strlen(arr));
//	return 0;
//}



//�ݹ���׳�
//int sum(int n)
//{
//	if (n > 1)
//	{
//		return n * sum(n - 1);
//	}
//	else if(n <= 1)
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	printf("%d", sum(5));
//	return 0;
//}


//쳲�����  �õݹ��д����ظ����� ������⵫Ч��̫��
//int sum(int n)
//{
//	if (n < 3)
//	{
//		return 1;
//	}
//	else
//	{
//		return sum(n - 1) + sum(n - 2);
//	}
//}


//ͬ����쳲�����  ���淽���㷨�ǳ��� 
// ������������⣨̫�������������� Ч�ʸ�
//���ǵ�������
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", fib(n));
//	return 0;
//}







//ͬ���ǵݹ�ĺ�ŵ������

// ����Բ������������ƶ�����
//int hnt(int n)
//{
//	int ret = 0;
//	while (n > 0)
//	{
//		if (n == 1)
//		{
//			ret = 1;
//			return ret;
//		}
//		else
//		{
//			ret = hnt(n - 1) * 2 + 1;
//			return ret;
//		}
//	}
//}
//int main()
//{
//	// 1 3 7 15 31 63 127
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", hnt(n));
//}



//����Բ������������ƶ�����
//void Move(char A, char C, int n)
//{
//	printf("����%d��Բ�̴�%c�ƶ���%c\n", n, A, C);
//}
//
//
//void HanoiTower(char A,char B,char C,int n)
//{
//	if (n == 1)
//	{
//		Move(A, C, n);
//	}
//	else
//	{
//		HanoiTower(A, C, B, n - 1);
//		Move(A, C, n);
//		HanoiTower(B, A, C, n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	HanoiTower('A','B','C',n);
//}



//������̨������ 1 2 ����































































