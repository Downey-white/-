#define _CRT_SECURE_NO_WARNINGS
  
#include<stdio.h>

//int main()
//{
//	int i = 1;
//	//��whileѭ���У�break�������õ���ֹѭ��
//	//��whileѭ���У�continue����������������ѭ��continue��ߵĴ���
//	//ֱ��ȥ�жϲ��֣����Ƿ������һ��ѭ��
//
//	while (i <= 10)
//	{
//		if (5 == i)
//		{
//			continue;
//		}
//		printf("%d\n", i);
//		i++;
//
//	}
//
//	/*while (i<=10)
//	{
//		if (5==i)
//		{
//			break;
//		}
//		printf("%d\n", i);
//		i++;
//			
//	}*/
//
//
//
//	return 0;
//}

//getchar()
//EOF-end of file - �ļ�������־
//int main()
// {  
//	int ch = getchar();
//	//printf("%c ", ch);
//	putchar(ch);//���һ���ַ�
//
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	//ctrl+z - getchar �Ͷ�ȡ����
//	while ((ch=getchar() )!=EOF )
//	{
//		putchar(ch);
//	}
//
//	return 0;
//}


//int main()
//{
//	char password[20] = { 0 };
//	printf("����������:> " );
//	scanf("\s", password);//password����������������������ǵ�ַ������������������Ԫ�صĵ�ַ
//	//scanfֻ�ܶ����ո�ǰ������  gets���Զ�һ����
//		printf("���ٴ�ȷ������(Y/N)��> ");//�����еĻس�����\n
//		//��������
//		//getchar();//����\n;
//		//����������������
//		int tmp = 0;
//		while (tmp=getchar()!='\n')
//		{
//			;
//		}
//	int ch = getchar();
//	if (ch=='Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//
//
//	return 0;
//
//}

int main()
{
	int ch = 0;
	while ( (ch = getchar()) !=EOF )
	{
		if (ch < '0' || ch>'9')
		
			continue;
         //printf("\s ", ch);
		  putchar(ch);
	}

	 

	return 0;
}