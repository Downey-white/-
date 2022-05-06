#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	printf("hehe\n");
//	main();
//
//	return 0;
//}
//函数自己调用自己叫递归

//void print(unsigned int n)
//{
//	if (n > 9)//如果没这个条件就死递归了，栈溢出-Stack Overflow
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	printf("请输入无符号整数：>");
//	scanf("%u", &num);//1234
//	//递归-函数自己调用自己
//	print(num);//print 函数可以打印参数部分数字的每一位
//
//	return 0;
//}

#include<string.h>
//int  my_strlen(char* str)//*str是数组首元素；str是数组首元素地址
//{
//	int count = 0;
//		while (*str !='\0')
//		{
//			count++;
//			str++;//就是地址定位到数组里面下一个元素
//		}
//	return count;
//}

//int  my_strlen(char* str)//*str是数组首元素；str是数组首元素地址
//{
//	if (*str != 0)
//	{
//		return 1 + my_strlen(str + 1);//str+1是下一个字符的地址
//		//用++str也可以，不过有副作用，就是这个str不在原来的str。
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	//char arr[] = "姓吴的都是傻逼";
//	char arr[]="bit"; 
//	//['b']['i']['t']['\0']
//	//
//	//模拟实现一个strlen函数
//	printf("%d ",my_strlen(arr));
//
//	return 0;
//}


//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	//迭代
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//int fac(int i)
//{
//	if (i>1)
//	{
//		return i * fac(i - 1);
//	}
//	else
//	{
//		return 1;
//	}
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("你输入的数的阶乘是:>%d", fac(n));
//
//	return 0;
//}
//有一些功能：可以使用迭代的方式实现，也可以使用递归


//
//int count = 0;
////递归可以求解，但是效率太低了
//int fib(int n)
//{
//	//统计第3个斐波那契数的计算机次数
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//	{
//	return 	(fib(n - 1) + fib(n- 2));
//	}
//}
//
////求斐波那契数列
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 0;
//	ret = fib(n);
//	printf("%d\n ", ret);
//	printf("count=%d\n ",count);
//	return 0;
//}

//int fib(int n)
//{
//	   int a = 1;
//		int b = 1;
//		int c = 1;
//	while (n > 2)
//	{
//	   c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 0;
//	ret = fib(n);
//	printf("%d\n ", ret);
//	
//	return 0;
//}


