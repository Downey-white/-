#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int  main()
//{
//	//int len = strlen("abc");
//	//printf("%d\n", len);
//	////��ʽ����
//	//printf("%d\n", strlen("adc"));
//	//return 0;
//
//	/*char arr1[20] = { 0 };
//	char arr2[] = "��������ɵ��";
//	printf("%s\n", strcpy(arr1, arr2));*/
//
//	printf("%d", printf("%d", printf("%d", 43)));//printf���ش�ӡ�ַ��ĸ���
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
//	//��������һ��-��֪
//	int Add(int, int);
//	int c = Add(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}
////�����Ķ���
//int Add(int x,int y)
//{
//	return x + y;
//}

#include"add.h"
#include"sub.h"
//���뾲̬��
#pragma comment(lib,"��̬��.lib")
int main()
{
	int a = 10;
	int b = 20;
	printf("%d\n", Add(a, b));
	printf("%d\n", sub(a, b));

	return 0;
}