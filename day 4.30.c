#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	 
//
//	
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{    
//		if (5 == i)
//			break;
//		
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	//break跳出所在的循环语句
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//			continue;
//
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//
//
//	return 0;
//}

//计算n!的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//
//	for ( i= 1; i <= n; i++)
//	{
//		ret *=i;
//
//	}
//	printf("%d\n", ret);
//
//
//	return 0;
//}


//int main()
//{
//	int i = 0;	
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//
//	//1！+2！+3！+...+10！
//	for ( n = 1; n <= 10; n++)
//	{
//		ret = 1;//计算n的阶乘之前，把ret初始化为1
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//		 
//	}
//      printf("%d\n", sum);
//	return 0;
//}


//最优的计算1！+2！+..+10！
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for ( i = 1; i <=n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//
//
//
//	return 0;
//}
//最优的计算1！+2！+..+10！
//int main()
//{
//	
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	
//	for (n = 1; n <= 10; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//
//
//
//	return 0;
//}

//折半查找/二分查找
//int main()
//{
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//要查找的数字
//	//在arr这个有序的数组中查找k（7）的值
//	int sz = sizeof(arr) / sizeof(arr[0]);//求数组元素的个数
//	int  left = 0;
//	int  right = sz - 1;//右边数组的下标
//	/*int mid = 0;*/
//	while (left<=right)
//	{
//		int mid = (right +left) / 2;
//		if (arr[mid]< k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了,下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("找不到了\n");
//	}
//	
//	return 0;
//}
//
//#include<string.h>
//#include<Windows.h>
//int main()
//{
//	char arr1[] =  "welcome to bit !!!!!!!" ;//..........\0
//	char arr2[] =  "######################" ;
//	int  left = 0;
//	int right = strlen(arr1)-1;//数组元素的个数
//	
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//单位ms - 1000ms=1s//睡眠1s
//		system("cls");//清空屏幕
//		left++;
//		right--;
//
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//int main()
//{
//
//	char arr[4] = "abcd";
//
//	 int a = strlen(arr);
//
//	return 0;
//}

//strcmp的头文件是#include<string.h>
int main()
{
	int  number = 0;
	//假设正确的密码是字符串"123456"
	char password[20] = {0};
	int i = 0;
	for ( i = 0; i < 3; i++)
	{
		printf("请输入密码>:");
		scanf("%s", password);
		//if (password =="123456")//err-两个字符串比较，不能使用==，应该使用strcmp
		//这是比较2个字符串的地址是没有意义的
		if(strcmp(password,"123456") == 0)//比较对应位置的ASCII
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (3 == i)
	{
		printf("三次密码输入失败，退出程序\n");
	}


	return 0;
}
//abccd>abcccccc
//abcccccccc


