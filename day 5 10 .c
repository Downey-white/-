#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	//int a = 6 / 5;//结果是1
//	//printf("%d\n", a);
//
//	//float a = 6 / 5;//结果是1.000000
//	//printf("%f\n", a);
//	//这种就是有小数的情况
//	//float a = 6.0 / 5;//或者6/5.0
//	//printf("%f\n", a);
//
//	float a = 6.0f / 5.0f;//这样就变成双精度(double)的了回报警告，可以左右加上f
//	printf("%f\n", a);
//	return 0;
//}




//int main()
//{
//	int a = 7 % 3;//取的是余数
//	printf("%d\n", a);
//
//
//	return 0;
//}



//int main()
//{
//	int a = 2;//int 类型是4byte=32个bit 
//	//把a的二进制向左移动一位
//	int b = a << 1;
//	printf("b=%d\n", b);//b=4
//
//
//	return 0;
//}




//int main()
//{
//	int a = 10;//int 类型是4byte=32个bit 
//	//把a的二进制向右移动一位
//	printf("a=%d\n", a);//10
//
//	int b = a >> 1;
//	//当前的右移操作符使用的：算术右移
//	printf("b=%d\n", b);//5
//
//
//	return 0;
//}


//int main()
//{
//	int a = -1;//int 类型是4byte=32个bit 
//	//把a的二进制向右移动一位
//	int b = a >> 1;
//	//当前的右移操作符使用的：算术右移
//	printf("b=%d\n", b);//-1
//
//
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = 5;
//	//^ - 按（二进制）位异或
//	//对应的二进制位进行异或
//	//规则：相同位0，相异位1
//	int c = a^ b;
//	printf("c=%d\n", c);
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000110
//	//6
//
//	// | - 按（二进制）位或
//	//int c = 3 | 5;
//	//printf("c=%d\n", c);
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000111 
//	
//	//& - 按（2进制）位与
//	//int c = 3 & 5;
//	//printf("c=%d\n", c);
//	//
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000001
//	
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = 5;
//    //交换
//    //
//    printf("a = %d b = %d\n", a, b); 
//	a = a ^ b;	
//	b = a ^ b;//a^a^b=a^0=a
//	a = a ^ b;//a^a^b=0^b=b
//	printf("a = %d b = %d\n", a, b);
//
//	//printf("a = %d b = %d\n", a, b);
//	////这种是有缺陷的，假如a和b很大，但是没超出int的范围，
//	////但是加起来超过了就会导致一部分二进制会被删掉，这样就等不到要的结果
//	////数值太大会溢出
// //   a = a + b;//8
// //   b = a - b;//3
// //   a = a - b;//5
// //   printf("a = %d b = %d\n", a, b);
//
//
//	//int c = 0;//空瓶
//	//printf("a = %d b = %d\n", a, b);
//	//c = a;
//	//a = b;
//	//b = c;
//	//printf("a = %d b = %d\n", a, b);
//
//	
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	//a^a=0
//	//011
//	//011
//	//000
//
//	//a^0=a
//	//011
//	//000
//	//011
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	
///*00000000000000000000000000000011
//	00000000000000000000000000000101
//	 a = (a ^ b) - (a & b);
//	printf("%d\n", a);*/
//
//
//
//}




//int main()
//{
//	int a = 13;
//	int i = 0;
//	int count = 0;
//	for ( i = 0; i < 32; i++)
//	{
//		if (a & 1==1)
//		{
//			count++;
//		}
//	  a = a >> 1;
//	}
//	printf("二进制有%d个1\n", count);
//	//00000000000000000000000000000001101
//	//00000000000000000000000000000000001
//	//00000000000000000000000000000000001
//
//
//
//	return 0;
//}


//int main()
//{
//
//	int a = 13;
//	//把a的二进制中的第五位置成1
//	a = a | (1 << 4);
//	printf("a = %d\n", a);//29
//	//把a的二进制中的第五位置成0
//	a = a & ~(1<<4);
//	//a = a & ~(16);
//	printf("a = %d\n", a);//13
//
//	
//	//
//	//00000000000000000000000000001101
//	//00000000000000000000000000010000
//	//00000000000000000000000000011101
//	// 16+13=29
//	//1<<4
//	//00000000000000000000000000000001
//
//	//00000000000000000000000000011101
//    //11111111111111111111111111101111
//    //00000000000000000000000000010000
//	//1<<4
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int x = 0;
//	int y = 20;
//	a = x = y + 1;//连续赋值
//	
//	x = y + 1;
//	a = x;
//
//	return 0;
//
//}


//int main()
//{
//	int a = 10;
//	a = 100;
//	a = a + 100;//1
//	a += 100;//2
//	a = a >> 3;
//	a >>= 3;
//	
//	return 0;
//}


//=  -- 赋值
//==  -- 判断相等



//int main()
//{
//	int flag = 0;
//	printf("%d\n", !flag);//
//
//	////flag为真，打印hehe
//	//if (flag)
//	//{
//	//	printf("hehe\n");
//	//}
//	////当flag为假，打印haha
//	//if (!flag)
//	//{
//	//	printf("haha\n");
//	//}
//	return 0;
//}

//单目操作符 -- 只有一个操作数

//int main()
//{
//	int a = 10;
//	a = -a;
//	printf("%d\n", a);
//
//	return 0;
//}



//
//
//int main()
//{
//	short s = 5;
//	int a = 10;
//	//sizeof括号中放的表达式是不参与运算的！
//	printf("%d\n", sizeof(s = a + 2));//2
//	printf("%d\n", s);//5
//	printf("%d", sizeof(short));//2
//	   
//
//	//int a = 4;
//	//int  arr[10] = { 0 };
//	//printf("%d\n", sizeof(arr));//单位是字节
//	//printf("%d\n", sizeof(int  [10]));//40 - int [10]是arr数组的类型
//
//	//printf("%d\n", sizeof(a));//计算a所占空间的大小，单位是字节
//	//printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof a);
//	//sizeof是一个操作符，不是函数
//	//sizeof括号中放的表达式是不参与运算的！
//     return 0;
//
//}


//int main()
//{
//	int a = -1;
//	//100000000000000000000000000000001 - 原码
//	//111111111111111111111111111111110 - 反码
//	//111111111111111111111111111111111 - 补码
//	//～按位取反  (符号位一样取反)
//	//111111111111111111111111111111111
//	//000000000000000000000000000000000
//	int b = ~a;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	
//	return 0;
//}




//int main()
//{
//	int a = 10;
//	printf("%d\n", a--);//10
//	printf("%d\n", a);//9
//
//
//
//	//int b = a++;//后置++，先使用，再++ b=10
//	//int b = ++a;//前置++， 先++，后使用 b=11
//
//	//int b = a--;//后置--，先使用，后-- b=10 
//	//int b = --a;//前置--， 先--，后使用 b=9
//	//printf("%d\n", a);//11
//	//printf("%d\n", b);//11
//	return 0;
//}


//这种是垃圾代码，在不同的编码器得到不同的值
//#include<stdio.h>
//int main()
//{
//    int a = 1;
//    int b = (++a) + (++a) + (++a);//4+4+4 分别自增三次
//    printf("%d\n", b);
//    return 0;
//}



//int main()
//{
//	int a = 10;
//	printf("%p\n" ,& a);//& - 取地址操作符
//	int* pa = &a;//pa是用来存放地址的 - pa 就是一个指针变量
//	*pa=20;//* - 解引用操作符 - 间接访问操作符
//	printf("%d", a);
//
//	return 0;
//}


//int main()
//{
//	int a = (int )3.14;//(int)强制转换为int类型
//	printf("%d\n", a);//3
//
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = 5;
//	//if (a == b)
//	//if (a != b)
//    //if (a > b)
//	//if (a < b)
//	//if (a >= b)
//	//if (a <= b)
//	{
//
//	}
//
//	return 0;
//}


// = 赋值   == 判断相等

// ==
//比较2个字符串相等，不能使用==
// 
//

//int main()
//{
//	int a = 3;
//	int b = 0;
//	//if (a && b)//假  0
//	if(a || b) //真
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//    //int i = 0, a = 0, b = 2, c = 3, d = 4;
//   // i = a++ && ++b && d++;//a是后置++，一开始是0 后面的就不用算了，所以后面的就没掉了
//    int i = 0, a = 1, b = 2, c = 3, d = 4;
//    i = a++ && ++b && d++;
//    //i = a++||++b||d++;
//    printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//    return 0;
//}
////程序输出的结果是什么？



//int main()
//{
//	int a = 3;
//	int b = 0;
//	if (a>5)
//	{
//		b = 1;
//	}
//	else
//	{
//		b = -1;
//	}
//	//三目操作符
//	b= a > 5 ?   1 :  -1;
//	return 0;
//}


// max = (a>b?a:b);



//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	//逗号表达式 - 要从做向右依次计算，但是整个表达式的结果是最后一个表达式的结果
//	int d = (c = 5, a = c + 3, b = a - 4, c += 5);
//	        // c=5 a=8           b=4   c=5+5=10
//	printf("%d\n", d);//10
//
//
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//打印5         0 1 2   4
//	printf("%d\n", arr[4]);//[] - 就是下标引用操作符
//	//[]的操作数是2个 ：arr和4
//	// 
//	//3+5;
//	return 0;
//}

////函数的定义
// int Add(int x, int y)
//{
//	return x + y;
//}
//
// void test()
// {
//
// }
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数调用
//	int ret = Add(a, b);//() - 函数调用操作符
//	
//	test();
//
//	return 0;
//}



// 结构成员访问操作符
//.
//->

// 结构体
//
//int float char short
// double long 
//
//书：书名，书号，出版社，作者，定价
//人： 名字，年龄，性别
//
//struct结构 结构体

//创建了一个自定义的类型
struct book
{
	//结构体成员（变量）
	char name[20];
	char id[20];
	int  price;
 };


int main()
{
	int num = 10;
	//结构体变量名.成员名
	struct book b = {"C语言","c20220510",30};
	struct book* pb = &b;
	//结构体指针->成员名
	printf("书名：%s\n", pb->name);
	printf("书号：%s\n", pb->id);
	printf("价格：%d\n", pb->price);


	//结构体变量名.成员名
	//printf("书名：%s\n", (*pb).name);
	//printf("书号：%s\n", (*pb).id);
	//printf("价格：%d\n", (*pb).price);


	//printf("书名：%s\n", b.name);
	//printf("书号：%s\n", b.id);
	//printf("价格：%d\n", b.price);

	return 0;
}




