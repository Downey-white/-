#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int i = 1;//初始化
//	while (i <= 10)//判断部分
//	{
//		printf("%d ", i);
//		i++;//调整部分
//	}
//
//
//
//	return 0;
//}

//
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//			break;
//		printf("%d ", i);
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for ( i = 1; i <= 10 ; i++)
//	{
//		printf("%d ", i);
//		i = 5;//最好不要在for循环里面添加循环变量，这里添加了导致了死循环。
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for ( i = 1; i <= 10;)
//	{
//		printf("%d ", i);
//		i++;
//	}
//
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10;i++)
//	{
//		printf("%d ", i);
//		i++;
//	}
//
//
//	return 0;
//}

//循环体内改变循环变量
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//		int j = 0;
//		for ( j = 0; j < 10; i++)
//		{
//			printf("hehe\n");
//		}
//
//	}
//
//
//	return 0;
//}

//这种叫左闭右开的写法 这样i<10 ，这样10也是有意义的，是这个for循环的循环次数10次
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//
//	}
//
//	return 0;
//}
//

//int main()
//{
//	//判断部分的省略 - 判断部分恒威真
//	for(;; )
//	{
//		printf("hehe\n");
//	}
//
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//输出hehe的个数是3个
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++)
//	{
//		for (; j < 3; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (;  i < 3; i++)
//	{
//		for (; j < 3; j++)//i循环一次后，j是3,所以只打印3行hehe
//		{
//			printf("hehe\n");
//		}
//	}
//
//
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	int y = 0;
//	for (x = 0, y = 0; x < 2 && y>5; ++x, y++)
//		printf("hehe\n");
//
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for  (i = 0,k = 0; k = 0; i++,k++)//判断语句中k被赋值为0，所以是假，不执行
//	{
//		k++;
//	}
//
//	return 0;
//}
