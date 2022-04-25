#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<stdlib.h>


//运算操作符 + - * / %取模（余）

//
//int main()
//{
//	int a = 3;
//	
//	//a = a + 5;
//	//a += 5;
//	//a = 6;
//	//a = a - 3;
//	//a -= 3;
//	a %= 3;//a=a%3;
//	printf("%d\n", a);
//
//
//	return 0;
//}

//int main()
//{
//
//	//在C语言中0代表假，1代表真
//	//int a = 10;
//	int a = 0;
//	int b = 0;
//	printf("%d", !a);//1
//	if (a)
//	{
//		//如果a为真做事
//	}
//	if (!a)
//	{
//		//如果a为假做事
//	}
//	//负值
//	a = -a;
//	b = -5;
//	return 0;
//}

//sizeof是操作符
//int main()
//{
//	//sizeof是一个操作符
//	// 括号可省略，是操作符，不是函数，求变量可省略，求类型不能省略
//	//计算类型或者变量的大小的
//	int a = 10;
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(a));
//
//	return 0;
//}

//int main()
//{
//	//10*4=40
//	int arr[10] = { 0 };
//	
//	printf("%d\n", sizeof(arr));//计算的是数组的大小，单位是字节
//	printf("%d\n", sizeof(arr[1]));//4
//	int sz = sizeof(arr) / sizeof(arr[1]);//40/4
//	printf("%d\n", sz);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	printf("%d", ~a);
//	//~按(二进制)位取反
//	
//
//	
//
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;//后置++,先使用，再++
//	//int b = ++a;//前置++ - 先++，后使用
//	//printf("%d\n", a);// 11
//	//printf("%d\n", b);// 11
//	printf("%d\n", b);// 10
//	printf("%d\n", a);// 11
//
//	return 0;
//}

//int main()
//{
//	//强制类型转换
//	int a = (int)3.14;
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a && b;//a是真，b也是真，c就是真1
//	printf("%d\n", c);
//	if (a && b)
//	{
//		printf("good\n");
//	}
//
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 5;
//	int sum = 0;
//	//if (a > b)
//	//{
//	//	sum = a;
//	//	printf("sum=%d\n", a);
//	//}
//	//else
//	//{
//	//	sum = b;
//	//	printf("sum=%d\n", b);
//	//}
//
//	sum=a > b ? a : b;//这个就类似和上面注释的if类型一样
//	printf("sum=%d\n", sum);
//	return 0;
//}

//逗号表达式，用逗号隔开的表达式
//int main()
//{
//	(3, 4 + 5, 6);
//	int a = 0;
//	int b = 3;
//	int c =5;
//	         //a=5  c=1    b=3
//	int d = (a = b + 2,c = a - 4, b = c + 2);
//	//逗号表达式，是从左向右以此计算的
//	//整个表达式的结果是最后一个表达式的结果
//	printf("%d\n", d);
//	return 0;
//}


//下标引用操作符
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[5]);
//
//
//	return 0;
// }

//函数调用操作符
//int main()
//{  
//	//调用函数的时候，函数名后边的（）就是函数调用操作符
//	printf("hello\n");
//	printf("%d\n", 100);
//
//	return 0;
//}

//C语言提供的关键字
//1.C语言提供的，不能直接创建关键字
//2.变量名不能是关键字


//int main()
//{
//	{
//		int a = 10;//自动创建，自动销毁的-自动变量
//		//auto 省略掉了
//		// 
//		//auto新的c语言语法中也有其他用法-暂时不考虑
//	}
//
//	return 0;
//}



//int main()
//{   
//	//
//	//大量/频繁被使用的数据，想放在寄存器中，提升效率
//	//
//	register int num = 100;//建议num的值存放在寄存器中
//
//	return 0;
//}


//typedef unsigned int   u_int;//typedef 类型重定义：通俗的意思就是用其他的符号来表示这类型
////张三-小三
//int main()
//{
//	unsigned int sum = 0;//unsigned 无符号的
//	u_int a = 0;
//	return 0;
//}

//static-静态的
//1.static修饰局部变量
// 2.static 修饰全局变量
// 3.static修饰函数
//

//void test()
//{
//	static int a = 1;
//	int b = 1;
//	a++;
//	b++;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	
//
//}
//
//
// int main()
// {
//	 int i = 0;
//	 while (i < 10)
//	 {
//		 test();
//		 i++;
//	 }
//
//
//	return 0;
//}

////extern 声明外部符号
//extern int  g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//
//	return 0;
//}

//声明函数

//extern int ADD(int x, int y);
//int main()
//{
//	int a=10;
//	int b = 30;
//	int sum = 0;
//
//	sum = ADD(a, b);
//	printf("sum=%d\n", sum);
//
//	return 0;
//}


//define是一个预处理指令
//1.define 定义符号
//#define max 10000
//int main()
//{
//	printf("%d\n", max);
//
//	return 0;
//}
// 
//2.define 定义宏

//#define ADD(x,y) x+y
//int main()
//{
//	printf("%d\n", ADD(2, 3));
//	printf("%d\n", 4*ADD(2, 3));//4*2+3=11
//
//
//	return 0;
//}
//
//#define ADD(x,y) ((x)+(y))
//int main()
//{
//	//printf("%d\n", ADD(2, 3));
//	printf("%d\n", 4 * ADD(2, 3));//4*5=20
//
//
//	return 0;
//}


//int main()
//{
//	int a = 10;//a在内存中要分配空间的-4个字节
//	printf("%p\n", &a);//%p专门用来打印地址的
//	int*pa = &a;//pa是用来存放地址的，在c语言中pa叫是指针变量
//	//* 说明 pa是指针变量
//	// int 说明pa执行的对象是int类型
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	return 0;
//}

//指针就是地址
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;//*解引用操作 *pa就是通过pa里面的地址，找到a
//	printf("a=%d\n", a);
//
//	return 0;
//}

//指针类型的大小
//int main()
//{
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	
//
//
//	return 0;
//}


//结构体可以让C语言创建新的类型出来


//创建一个学生
struct stu
{
	char name[20];//成员变量
	int age;
	double score;
};

//创建一个书的类型
struct book
{
	char name[20];
	float price;
	char id[30];//书页
};

int main()
{
	struct stu s = {"张三",20,85.5};//结构体的创建和初始化
	printf("1.%s %d %lf\n", s.name, s.age, s.score);//结构体变量.成员变量
	//字符串用%s 字符用%c
	
	struct stu* ps = &s;
	printf("2.%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
	printf("3.%s %d %lf\n", ps->name, ps->age, ps->score);//结构体指针->成员变量名
	struct book b = { "peter",50,"300" };
	printf("%s %lf %s\n", b.name, b.price, b.id);
	return 0;
}