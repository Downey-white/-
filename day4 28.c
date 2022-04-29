#define _CRT_SECURE_NO_WARNINGS
  
#include<stdio.h>

//int main()
//{
//	int i = 1;
//	//在while循环中，break用于永久的终止循环
//	//在while循环中，continue的作用是跳过本次循环continue后边的代码
//	//直接去判断部分，看是否进行下一次循环
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
//EOF-end of file - 文件结束标志
//int main()
// {  
//	int ch = getchar();
//	//printf("%c ", ch);
//	putchar(ch);//输出一个字符
//
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	//ctrl+z - getchar 就读取结束
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
//	printf("请输入密码:> " );
//	scanf("\s", password);//password是数组名，数组名本身就是地址，数组名代表数组首元素的地址
//	//scanf只能读到空格前的数据  gets可以读一整行
//		printf("请再此确认密码(Y/N)：> ");//键盘中的回车就是\n
//		//清理缓冲区
//		//getchar();//处理\n;
//		//清理缓存区里多个内容
//		int tmp = 0;
//		while (tmp=getchar()!='\n')
//		{
//			;
//		}
//	int ch = getchar();
//	if (ch=='Y')
//	{
//		printf("确认成功\n");
//
//	}
//	else
//	{
//		printf("确认失败\n");
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