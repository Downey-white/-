#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


//int main()
//{
//	int i = 0;
//	//0-9
//	for (i = 0; i < 10; i++)//执行了10次但是判断了11次
//	{
//		printf("haha ");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a=1, b = 1; a <= 100 ; a++)
//	{
//		if (b >= 20)  break;
//		if (1 == b % 3)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//
//	return 0;
//}

//编写程序数一下1到100的所有整数中出现多少个数字9
// 9 19 29 39 49 59 69 79 89 99
// 90 91 92 93 94 95 96 97 98 99
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)//91/10=9这是整形除法
//			count++;
//	}
//	printf("%d\n ", count);
//	return 0;
//}


#include<math.h>
//计算1/1-1/2+1/3-1/4+1/5-...+1/99-1/100的值，打印出结果
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	//int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum -=  1.0 / i;
//		}
//		else
//		{
//			sum += 1.0 / i;
//		}
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for ( i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//			flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//求10个整数中最大值
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int max = arr[0];
//	
//	for ( i = 0; i < 10; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//		
//	}
//	printf("10个整数中最大值%d\n", max);
//	return 0;
//}

//int main()
//{
//	int  arr[] = { 0 };
//	int i = 0;
//	int j = 0;
//	for ( i= 0; i<10 ; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	
//	int max = arr[0];
//	
//	for (i = 0; i < 10; i++)
//	{
//
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//
//	}
//	printf("10个整数中最大值%d\n", max);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int ret = 0;
//	for ( i = 1; i <=9; i++)
//	{
//		for ( j= 1; j <=9; j++)
//		{
//			ret = i * j;
//			printf("%d*%d=%d\n", i, j, ret);
//		}
//
//	}
//
//
//	return 0;
//}


////在屏幕上输出九九乘法口诀表
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//...

//int main()
//{
//	int i = 1;
//	//行数
//	for (i = 1; i <= 9; i++)
//	{
//		//打印一行
//		int j = 0;
//		for ( j = 1; j <=i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}

//void test(int arr[])
//{
//	arr[0] = 1;
//	arr[1] = 2;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}

//void test(int* p1, int* p2)
//{
//	*p1 = 1;
//	*p2 = 2;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	test(&a, &b);
//
//	return 0;
//}


//int a = 0;
//int b = 0;
//
//void test()
//{
//	a = 1;
//	b = 2;
//}
//int main()
//{
//	
//	test();
//
//	return 0;
//}


//int a;
//int b;
//
//void test()
//{
//	a = 1;
//	b = 2;
//}
//
//int a = 0;
//int b = 0;
//
//int main()
//{
//
//	test();
//
//	return 0;
//}

//逗号表达式
//exec((v1,v2),(v3,v4),v5,v6)=exec(v2,v4,v5,v6)

//void printf_table(int n)
//{
//	int i = 0;
//	//行
//	for (i = 1; i <= n; i++)
//	{
//		//打印一行
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//9
//	//函数
//	printf_table(n);
//	//函数的起名是非常关键，名字最好能体现函数的功能
//	return 0;
//}


//int Fun(int n)
//{
//	if (n == 5)
//		return 2;
//	return 2 * Fun(n + 1);
//}
//
//int main()
//{
//	printf("%d\n", Fun(2));
//	return 0;
//}

//int my_strlen(char*str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++; 
//		str++;
//	}
//	return count;
//}

//resever_string(char*str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	while (left<right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}

//void resever_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	while (left < right)
//	{
//		char tmp = *(str+left);//str[left]=*(str+left)
//		*(str + left) = *(str+right);
//		*(str + right) = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	resever_string(arr);//数组名arr是数组arr首元素的地址
//	printf("%s\n", arr);//fedcba
//
//	return 0;
//}

int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

void resever_string(char* str)
{
	char tmp = *str;//1
	int len = my_strlen(str);//
	*str = *(str + len-1);//2
	*(str + len - 1) = '\0';//3
	//判断条件
	if (my_strlen(str+1)>=2)
	{
		resever_string(str + 1);//4
	}
	*(str + len - 1) = tmp;//5
}

int main()
{
	char arr[] = "abcdef";
	resever_string(arr);//数组名arr是数组arr首元素的地址
	printf("%s\n", arr);//fedcba

	return 0;
}
