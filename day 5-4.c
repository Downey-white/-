#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int  main()
//{
//	//int len = strlen("abc");
//	//printf("%d\n", len);
//	////链式访问
//	//printf("%d\n", strlen("adc"));
//	//return 0;
//
//	/*char arr1[20] = { 0 };
//	char arr2[] = "吴益雄是傻逼";
//	printf("%s\n", strcpy(arr1, arr2));*/
//
//	printf("%d", printf("%d", printf("%d", 43)));//printf返回打印字符的个数
//
//
//
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数声明一下-告知
//	int Add(int, int);
//	int c = Add(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}
////函数的定义
//int Add(int x,int y)
//{
//	return x + y;
//}

#include"add.h"
#include"sub.h"
//导入静态库
#pragma comment(lib,"静态库.lib")
int main()
{
	int a = 10;
	int b = 20;
	printf("%d\n", Add(a, b));
	printf("%d\n", sub(a, b));

	return 0;
}