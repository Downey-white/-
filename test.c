#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<stdlib.h>


//��������� + - * / %ȡģ���ࣩ

//
//int main()
//{
//	int a = 3;
//	
//	//a = a + 5;
//	//a += 5;
//	//a = 6;
//	//a = a - 3;
//	//a -= 3;
//	a %= 3;//a=a%3;
//	printf("%d\n", a);
//
//
//	return 0;
//}

//int main()
//{
//
//	//��C������0����٣�1������
//	//int a = 10;
//	int a = 0;
//	int b = 0;
//	printf("%d", !a);//1
//	if (a)
//	{
//		//���aΪ������
//	}
//	if (!a)
//	{
//		//���aΪ������
//	}
//	//��ֵ
//	a = -a;
//	b = -5;
//	return 0;
//}

//sizeof�ǲ�����
//int main()
//{
//	//sizeof��һ��������
//	// ���ſ�ʡ�ԣ��ǲ����������Ǻ������������ʡ�ԣ������Ͳ���ʡ��
//	//�������ͻ��߱����Ĵ�С��
//	int a = 10;
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(a));
//
//	return 0;
//}

//int main()
//{
//	//10*4=40
//	int arr[10] = { 0 };
//	
//	printf("%d\n", sizeof(arr));//�����������Ĵ�С����λ���ֽ�
//	printf("%d\n", sizeof(arr[1]));//4
//	int sz = sizeof(arr) / sizeof(arr[1]);//40/4
//	printf("%d\n", sz);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	printf("%d", ~a);
//	//~��(������)λȡ��
//	
//
//	
//
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;//����++,��ʹ�ã���++
//	//int b = ++a;//ǰ��++ - ��++����ʹ��
//	//printf("%d\n", a);// 11
//	//printf("%d\n", b);// 11
//	printf("%d\n", b);// 10
//	printf("%d\n", a);// 11
//
//	return 0;
//}

//int main()
//{
//	//ǿ������ת��
//	int a = (int)3.14;
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a && b;//a���棬bҲ���棬c������1
//	printf("%d\n", c);
//	if (a && b)
//	{
//		printf("good\n");
//	}
//
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 5;
//	int sum = 0;
//	//if (a > b)
//	//{
//	//	sum = a;
//	//	printf("sum=%d\n", a);
//	//}
//	//else
//	//{
//	//	sum = b;
//	//	printf("sum=%d\n", b);
//	//}
//
//	sum=a > b ? a : b;//��������ƺ�����ע�͵�if����һ��
//	printf("sum=%d\n", sum);
//	return 0;
//}

//���ű��ʽ���ö��Ÿ����ı��ʽ
//int main()
//{
//	(3, 4 + 5, 6);
//	int a = 0;
//	int b = 3;
//	int c =5;
//	         //a=5  c=1    b=3
//	int d = (a = b + 2,c = a - 4, b = c + 2);
//	//���ű��ʽ���Ǵ��������Դ˼����
//	//�������ʽ�Ľ�������һ�����ʽ�Ľ��
//	printf("%d\n", d);
//	return 0;
//}


//�±����ò�����
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[5]);
//
//
//	return 0;
// }

//�������ò�����
//int main()
//{  
//	//���ú�����ʱ�򣬺�������ߵģ������Ǻ������ò�����
//	printf("hello\n");
//	printf("%d\n", 100);
//
//	return 0;
//}

//C�����ṩ�Ĺؼ���
//1.C�����ṩ�ģ�����ֱ�Ӵ����ؼ���
//2.�����������ǹؼ���


//int main()
//{
//	{
//		int a = 10;//�Զ��������Զ����ٵ�-�Զ�����
//		//auto ʡ�Ե���
//		// 
//		//auto�µ�c�����﷨��Ҳ�������÷�-��ʱ������
//	}
//
//	return 0;
//}



//int main()
//{   
//	//
//	//����/Ƶ����ʹ�õ����ݣ�����ڼĴ����У�����Ч��
//	//
//	register int num = 100;//����num��ֵ����ڼĴ�����
//
//	return 0;
//}


//typedef unsigned int   u_int;//typedef �����ض��壺ͨ�׵���˼�����������ķ�������ʾ������
////����-С��
//int main()
//{
//	unsigned int sum = 0;//unsigned �޷��ŵ�
//	u_int a = 0;
//	return 0;
//}

//static-��̬��
//1.static���ξֲ�����
// 2.static ����ȫ�ֱ���
// 3.static���κ���
//

//void test()
//{
//	static int a = 1;
//	int b = 1;
//	a++;
//	b++;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	
//
//}
//
//
// int main()
// {
//	 int i = 0;
//	 while (i < 10)
//	 {
//		 test();
//		 i++;
//	 }
//
//
//	return 0;
//}

////extern �����ⲿ����
//extern int  g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//
//	return 0;
//}

//��������

//extern int ADD(int x, int y);
//int main()
//{
//	int a=10;
//	int b = 30;
//	int sum = 0;
//
//	sum = ADD(a, b);
//	printf("sum=%d\n", sum);
//
//	return 0;
//}


//define��һ��Ԥ����ָ��
//1.define �������
//#define max 10000
//int main()
//{
//	printf("%d\n", max);
//
//	return 0;
//}
// 
//2.define �����

//#define ADD(x,y) x+y
//int main()
//{
//	printf("%d\n", ADD(2, 3));
//	printf("%d\n", 4*ADD(2, 3));//4*2+3=11
//
//
//	return 0;
//}
//
//#define ADD(x,y) ((x)+(y))
//int main()
//{
//	//printf("%d\n", ADD(2, 3));
//	printf("%d\n", 4 * ADD(2, 3));//4*5=20
//
//
//	return 0;
//}


//int main()
//{
//	int a = 10;//a���ڴ���Ҫ����ռ��-4���ֽ�
//	printf("%p\n", &a);//%pר��������ӡ��ַ��
//	int*pa = &a;//pa��������ŵ�ַ�ģ���c������pa����ָ�����
//	//* ˵�� pa��ָ�����
//	// int ˵��paִ�еĶ�����int����
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	return 0;
//}

//ָ����ǵ�ַ
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;//*�����ò��� *pa����ͨ��pa����ĵ�ַ���ҵ�a
//	printf("a=%d\n", a);
//
//	return 0;
//}

//ָ�����͵Ĵ�С
//int main()
//{
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	
//
//
//	return 0;
//}


//�ṹ�������C���Դ����µ����ͳ���


//����һ��ѧ��
struct stu
{
	char name[20];//��Ա����
	int age;
	double score;
};

//����һ���������
struct book
{
	char name[20];
	float price;
	char id[30];//��ҳ
};

int main()
{
	struct stu s = {"����",20,85.5};//�ṹ��Ĵ����ͳ�ʼ��
	printf("1.%s %d %lf\n", s.name, s.age, s.score);//�ṹ�����.��Ա����
	//�ַ�����%s �ַ���%c
	
	struct stu* ps = &s;
	printf("2.%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
	printf("3.%s %d %lf\n", ps->name, ps->age, ps->score);//�ṹ��ָ��->��Ա������
	struct book b = { "peter",50,"300" };
	printf("%s %lf %s\n", b.name, b.price, b.id);
	return 0;
}