#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
//int cnt = 0;
//
//int fib(int n)
//{
//	cnt++;//1
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 2;
//	else
//		return fib(n - 1) + fib(n - 2);
//		
//}
//void main()
//{
//	fib(8);
//	printf("%d", cnt);
//}

//int main()
//{
//	int x = 1;
//	do {
//		printf("%2d\n", x++);//1 
//	} while (x--);
//
//	return 0;
//}

//
//int main()
//{
//	int i = 1;
//	int j;
//	j = i++;
//	return 0;
//}
//
//int main()
//{
//	int i = 10;
//	int j = 20;
//	int k = 3;
//	k *= i + j; //+�����ȼ���*=��  30*3=90
//	//k *= (i + j);
//	printf("%d\n", k);
//
//	return 0;
//}


#include<stdlib.h>
//int a = 1;//ȫ�ֱ���
//void test()
//{
//	int a = 2;
//	a += 1;
//}
//
//int  main()
//{
//	test();
//	printf("%d\n", a);//1
//
//
//	return 0;
//}
//
//int main()
//{
//
//	int/*hehe*/ a = 10;
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//
//	int a = 0, c = 0;
//	do {
//		--c;//c = -1
//		a = a - 1;//a = -1
//	} while (a > 0);
//
//	return 0;
//}


//int main()
//{
//	int x =0 , y = 0;
//	for (x = 0, y = 0; (y = 123) && (x < 4); x++)//ѭ��4��
//	{
//		;
//	}//1 1 1 1
//	return 0;
//}


//int main()
//{
//	int year = 1009, * p = &year;
//	//int a, b;
//	int year;
//	int* p = &year;
//	return 0;
//}


//if (A > B)
//{
//	for (i = B; i > 0; i--)
//	{
//		if ((A / i == 0) && (B / i == 0))
//		{
//			printf("%d", i);
//		}
//	}
//}
//else
//{
//	for (i = A; i > 0; i--)
//	{
//		if ((A / i == 0) && (B / i == 0))
//		{
//			printf("%d", i);
//		}
//	}
//}

//������A��������B����С��������ָ�ܱ�A��B��������С�������������һ���㷨��������A��B����С������
//��󹫱���=A*B/��С��Լ��

//int main()
//{
//	int A = 0;
//	int B = 0;
//	//printf("����������������>\n");//��ʾ�Ƕ����
//	//����
//	scanf("%d %d", &A, &B);
//
//	int i = 0;
//	while (1)
//	{
//		++i;
//		if(A * i % B == 0)
//		{
//			printf("%d\n", A * i);
//			break;
//		}
//		
//	}
//	/*for (i = 1; ; i++)
//	{
//		if (A * i % B == 0) 
//		{
//			printf("%d\n", A * i);
//			break;
//		}
//	}*/
//
//	//int m = A > B ? A : B;//��ʾ��С������
//	//while (1)
//	//{
//	//	if (m % A == 0 && m % B == 0)
//	//	{
//	//		printf("%d\n", m);
//	//		break;
//	//	}
//	//	else
//	//		m++;
//	//}
//	 
//	return 0;
//}

//int main()
//{
//	int A = 0;
//	int B = 0;
//	scanf("%d %d", &A, &B);
//	int m = A > B ? B : A;
//	int i = 0;
//	int min = 0;
//	int max = 0;
//	for (i = m; i > 0; i--)
//	{
//		if ((A % i == 0) && (B % i == 0))
//		{
//			min=i;
//		}
//	}
//	max = A * B / min;
//	printf("%d\n", max);
//
//	return 0;
//}


//��һ�仰�ĵ��ʽ��е��ã���㲻���ã����� I like beijing.�����������Ϊbeijing. like I

void reverse(char*left, char*right)
{
	char tmp = 0;
	while (left < right)
	{
		tmp = *left;
		*left = *right;
		*right = tmp;
		right--;
		left++;
	}
}
int main()
{
	char arr[100] = { 0 };
	//scanf("%s", arr);//�����ո�Ͳ��ڼ�������
	//printf("%s\n", arr);
	//���������
	gets(arr);
	//������ת��
	//1.�ַ������巭ת
	//.gnijieb ekil I
	int len = strlen(arr);
	reverse(arr,arr+len-1);//arr���������ǳ�������++  arr++�Ǵ����  
	//Ҳ�������Ϊ�ı�����Ԫ�صĵ�ַ����������������Ԫ�ص�ַ�������û��
	//printf("%s\n", arr);

	//2.ÿ����������
   //bejing like I
	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end !='\0')
		{
			end++;
		}
		//����һ������
		reverse(start, end - 1);
		if (*end == ' ')
			start = end + 1;
		else
		 start = end;
	}
	printf("%s\n", arr);

	return 0;
}