//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//
//int main()
//{
//	//int i = 1;
//	//do
//	//{
//	//	//��ִ��һ�Σ��ڽ����жϣ�����ִ��һ��
//	//	printf("%d", i);
//	//	i++;
//	//} while(i <= 10);
//
//
//	/*int n = 0;
//	int num = 0;
//	int f = 1;
//	scanf("%d", &n);*/
//	//��1��+ 2��+ 3!
//	/*for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			f *= j;
//		}
//		num += f;
//		f = 1;
//	}*/
//
//	/*for (int i = 1; i <= n; i++)
//	{
//		f *= i;
//		num += f;
//	}*/
//	//printf("%d", num);
//
//
//
//	//���ֲ������ݷ�
//	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int f = 7;
//	while(left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < f)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > f)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("û���ҵ�");
//	}*/
//
//
//
//	//������
//	//char arr1[] = "welcome to bite!!!!!!";
//	//char arr2[] = "*********************";
//	//int left = 0;
//	//int right = strlen(arr1) - 1;
//
//	//while (left <= right)
//	//{
//	//	printf("%s\n", arr2);
//	//	arr2[left] = arr1[left];
//	//	arr2[right] = arr1[right];
//	//	left++;
//	//	right--;
//	//	Sleep(500);//˯��һ��
//	//	system("cls");//�����Ļ
//	//}
//	//printf("%s\n", arr2);
//
//
//
//
//	//�����½ 
//	//char pwd[20] = { 0 };
//	//int i = 0;
//	//for (i = 1; i <= 3; i++)
//	//{
//	//	printf("���������룡");
//	//	scanf("%s", pwd);
//	//	//strcmp()�ַ����������ж��Ƿ���ͬ����ͬ����0
//	//	//�ַ����Ƚϣ��ȶ�Ӧλ�õ��ַ���ASCIIֵ
//	//	//�������������ǵ�ַ������&����
//	//	if (strcmp(pwd, "123456") == 0)
//	//	{
//	//		printf("��½�ɹ�");
//	//		break;
//	//	}
//	//	else
//	//	{
//	//		if (i == 3) {
//	//			printf("��������������󣬶����˺ţ�");
//	//		}
//	//		else
//	//		{
//	//			printf("�������������������\n");
//	//		}
//	//	}
//	//	
//	//}
//
//
//	return 0;
//}