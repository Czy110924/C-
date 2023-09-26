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
}s1{ "asd", 23, "234", {3, 'f'}, NULL};//s1是全局变量


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
	//局部变量
	struct Stu s = { "张三", 23, "123", {'w',2,'e'}, NULL };
	struct Stu* pc = &s;

	//结构体访问操作符  .  ->
	printf("%c\n", (*pc).s.a);
	printf("%c\n", pc->s.a);

	//写打印s函数, 结构体传参数， 传值调用， 传址调用
	print1(s);
	print2(&s);//推荐使用  空间利用率高，不创建临时空间， 缩短创建时间

	//每个函数调用都会开辟新的内存栈区空间，压榨栈区的空间，称为压栈操作
	//函数的传参会在栈区创建新的空间，也叫压栈操作，参数压栈


	return 0;
}