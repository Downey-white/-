#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//struct B
//{
//	char c;
//	short s;
//	double b;
//		 
//};
//struct stu
//{
//	struct B  sb;
//	//成员变量
//	char name[20];//名字
//	char sex[20];//性别
//	int age;//年龄
//	char id[10];//
//}s1,s2;//s1和s2也是结构体变量
////s1,s2是全局变量

//int  main()
//{
//	//. ->
//	//s是局部变量
//	struct stu s = { {'w',20,3.14},"张三","男",18,"z20220513",};//对象
//	//printf("%c\n", s.sb.c);
//	//printf("%lf\n", s.sb.b);
//	//printf("%d\n", s.sb.s);
//	//printf("%s\n", s.name);
//	//printf("%d\n", s.age);
//	//printf("%s\n", s.sex);
//	//printf("%s\n", s.id);
//	struct stu * ps = &s;
//	printf("%c\n", (*ps).sb.c);
//	printf("%c\n", ps->sb.c);
//	
//	return 0;
//}


struct B
{
	char c;
	short s;
	double b;

};
struct stu
{
	struct B  sb;
	//成员变量
	char name[20];//名字
	char sex[20];//性别
	int age;//年龄
	char id[10];//
};

void print1(struct stu t)
{
	printf("%c %d %lf %s %s %d %s \n", t.sb.c, t.sb.s, t.sb.b, t.name, t.sex, t.age, t.id);
}
void print2(struct stu * ps)
{
	printf("%c %d %lf %s %s %d %s \n", ps->sb.c, ps->sb.s, ps->sb.b, ps->name, ps->sex, ps->age, ps->id);

}


int  main()
{
	//. ->
	//s是局部变量
	struct stu s = { {'w',20,3.14},"张三","男",18,"z20220513", };//对象
	//写个函数打印s的内容
	print1(s);
	print2(&s);
	return 0;
}