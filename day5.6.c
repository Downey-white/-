#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	printf("hehe\n");
//	main();
//
//	return 0;
//}
//�����Լ������Լ��еݹ�

//void print(unsigned int n)
//{
//	if (n > 9)//���û������������ݹ��ˣ�ջ���-Stack Overflow
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	printf("�������޷���������>");
//	scanf("%u", &num);//1234
//	//�ݹ�-�����Լ������Լ�
//	print(num);//print �������Դ�ӡ�����������ֵ�ÿһλ
//
//	return 0;
//}

#include<string.h>
//int  my_strlen(char* str)//*str��������Ԫ�أ�str��������Ԫ�ص�ַ
//{
//	int count = 0;
//		while (*str !='\0')
//		{
//			count++;
//			str++;//���ǵ�ַ��λ������������һ��Ԫ��
//		}
//	return count;
//}

//int  my_strlen(char* str)//*str��������Ԫ�أ�str��������Ԫ�ص�ַ
//{
//	if (*str != 0)
//	{
//		return 1 + my_strlen(str + 1);//str+1����һ���ַ��ĵ�ַ
//		//��++strҲ���ԣ������и����ã��������str����ԭ����str��
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	//char arr[] = "����Ķ���ɵ��";
//	char arr[]="bit"; 
//	//['b']['i']['t']['\0']
//	//
//	//ģ��ʵ��һ��strlen����
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
//	//����
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
//	printf("����������Ľ׳���:>%d", fac(n));
//
//	return 0;
//}
//��һЩ���ܣ�����ʹ�õ����ķ�ʽʵ�֣�Ҳ����ʹ�õݹ�


//
//int count = 0;
////�ݹ������⣬����Ч��̫����
//int fib(int n)
//{
//	//ͳ�Ƶ�3��쳲��������ļ��������
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
////��쳲���������
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


