#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//��10������ƽ��ֵ
	//����1������
	int arr[10] = { 0 };
	//forѭ������10������
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);



	} 
	int t=0;
	//��forѭ����ʵ�ּӷ�
	for (i = 0; i < 10; i++)
	{
		t = t+arr[i];

	}
	//�ó�����ƽ��ֵ
	double avg = t / 10;

	//��ӡ
	printf("avg=%lf", avg);


	return 0;
}