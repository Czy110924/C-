#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

struct st
{
	char a;
	int b;
	char d;
};

struct Stu
{
	char name[20];
	int age;
	char id[10];
	struct st s;
	struct Stu* pt;
}s1{ "asd", 23, "234", {3, 'f'}, NULL};//s1��ȫ�ֱ���


void print1(struct Stu t)
{
	printf("%s %d %s %c %d %c %p\n", t.name, t.age, t.id, t.s.a, t.s.b, t.s.d, t.pt);
}

void print2(struct Stu* t)
{
	printf("%s %d %s %c %d %c %p\n", t->name, t->age, t->id, t->s.a, t->s.b, t->s.d, t->pt);
}

int main()
{
	//�ֲ�����
	struct Stu s = { "����", 23, "123", {'w',2,'e'}, NULL };
	struct Stu* pc = &s;

	//�ṹ����ʲ�����  .  ->
	printf("%c\n", (*pc).s.a);
	printf("%c\n", pc->s.a);

	//д��ӡs����, �ṹ�崫������ ��ֵ���ã� ��ַ����
	print1(s);
	print2(&s);//�Ƽ�ʹ��  �ռ������ʸߣ���������ʱ�ռ䣬 ���̴���ʱ��

	//ÿ���������ö��Ὺ���µ��ڴ�ջ���ռ䣬ѹեջ���Ŀռ䣬��Ϊѹջ����
	//�����Ĵ��λ���ջ�������µĿռ䣬Ҳ��ѹջ����������ѹջ


	return 0;
}