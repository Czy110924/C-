#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//shutdown -s -t 60,60���ػ�
//shutdown -aȡ���ػ�




//int main()
//{
//	//��ѭ��������gotoָ����Ŀ�꣬������ʹ��,�����������Ƕ�����
// goto���ܿ纯����ת��ֻ���ں�������ת
//flag:
//	printf("hhhhh");
//	goto flag;
//	return 0;
//}


int main()
{
	char arr[20] = { 0 };
	system("shutdown -s -t 60");

	printf("ע�⣡��ĵ��Խ�����ʮ���ػ���������ʮ�������롮������������ػ�ָ��\n");
	scanf("%s", arr);
again:
	if (strcmp(arr, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}


	return 0;
}