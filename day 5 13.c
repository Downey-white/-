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
//	//��Ա����
//	char name[20];//����
//	char sex[20];//�Ա�
//	int age;//����
//	char id[10];//
//}s1,s2;//s1��s2Ҳ�ǽṹ�����
////s1,s2��ȫ�ֱ���

//int  main()
//{
//	//. ->
//	//s�Ǿֲ�����
//	struct stu s = { {'w',20,3.14},"����","��",18,"z20220513",};//����
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
	//��Ա����
	char name[20];//����
	char sex[20];//�Ա�
	int age;//����
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
	//s�Ǿֲ�����
	struct stu s = { {'w',20,3.14},"����","��",18,"z20220513", };//����
	//д��������ӡs������
	print1(s);
	print2(&s);
	return 0;
}