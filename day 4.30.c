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
//	//break�������ڵ�ѭ�����
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

//����n!�Ľ׳�
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
//	//1��+2��+3��+...+10��
//	for ( n = 1; n <= 10; n++)
//	{
//		ret = 1;//����n�Ľ׳�֮ǰ����ret��ʼ��Ϊ1
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


//���ŵļ���1��+2��+..+10��
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
//���ŵļ���1��+2��+..+10��
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

//�۰����/���ֲ���
//int main()
//{
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//Ҫ���ҵ�����
//	//��arr�������������в���k��7����ֵ
//	int sz = sizeof(arr) / sizeof(arr[0]);//������Ԫ�صĸ���
//	int  left = 0;
//	int  right = sz - 1;//�ұ�������±�
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
//			printf("�ҵ���,�±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("�Ҳ�����\n");
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
//	int right = strlen(arr1)-1;//����Ԫ�صĸ���
//	
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//��λms - 1000ms=1s//˯��1s
//		system("cls");//�����Ļ
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

//strcmp��ͷ�ļ���#include<string.h>
int main()
{
	int  number = 0;
	//������ȷ���������ַ���"123456"
	char password[20] = {0};
	int i = 0;
	for ( i = 0; i < 3; i++)
	{
		printf("����������>:");
		scanf("%s", password);
		//if (password =="123456")//err-�����ַ����Ƚϣ�����ʹ��==��Ӧ��ʹ��strcmp
		//���ǱȽ�2���ַ����ĵ�ַ��û�������
		if(strcmp(password,"123456") == 0)//�Ƚ϶�Ӧλ�õ�ASCII
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (3 == i)
	{
		printf("������������ʧ�ܣ��˳�����\n");
	}


	return 0;
}
//abccd>abcccccc
//abcccccccc


