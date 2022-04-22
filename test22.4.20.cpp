#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//求10个数的平均值
	//创建1个数组
	int arr[10] = { 0 };
	//for循环输入10个数；
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);



	} 
	int t=0;
	//用for循环来实现加法
	for (i = 0; i < 10; i++)
	{
		t = t+arr[i];

	}
	//用除法求平均值
	double avg = t / 10;

	//打印
	printf("avg=%lf", avg);


	return 0;
}