#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//
//int main()
//{
//	int a = 2;
//	int b = 3;
//	printf("%d + %d = %d",a,b,a+b);
//	return 0;
//}


//#define _crt_secure_no_warnings = 1
//#include <stdio.h>
//main()
//{
//	int price = 0;
//	printf("�������Ԫ����");
//	scanf("%d", &price);
//
//	int change = 100 - price;
//
//	printf("����%dԪ", change);
//	return 0;
//}



//int main()
//{
//	printf("%zu\n", sizeof(char));
//	printf("%zu\n", sizeof(short));
//	printf("%zu\n", sizeof(int));
//	printf("%zu\n", sizeof(long));
//	printf("%zu\n", sizeof(long long));
//	printf("%zu\n", sizeof(float));
//	printf("%zu\n", sizeof(double));
//}

//extern int a;
//int main()
//{
//	short age = 20;
//	int high = 170;
//	float weight = 70;
//
//	printf("a-->%d\n", a);
//	return 0;
//}

//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//int main()
//{
//	enum Color c = RED;
//	enum Color d = 155;
//	printf("%d", d);
//	printf("%d",BLUE);
//	return 0;
//}


//#include <string.h>
//int main()
//{
//	char arr1[] = "abc\0ef";
//	char arr2[] = { 'a','b','c','d','\0'};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	int len = strlen("abc");
//	printf("%d\n", len);
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	printf("\x63 \n");
//	printf("\628 \n");
//	printf("%d\n",strlen("qwe t e"));
//	return 0;
//}

//int main()
//{
//	printf("Ҫ�ú�ѧϰ��\n");
//	int input = 0;
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("offer\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//	printf("�����ѡ��");
//
//	return 0;
//}


////whileѭ��
//int main()
//{
//	printf("��ʼѧϰ��0�д���\n");
//	int line = 0;
//	
//	while (line <20000)
//	{
//		printf("д����:%d\n",line);
//		line++;
//		
//	}
//	printf(" ����Ľ��\n");
//	return 0;
//}


//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	//����
//	scanf("%d,%d", &num1, &num2);
//	//���
//	int sum = num1 + num2;
//	//���
//	printf("%d + %d = %d", num1, num2, sum);
//	return 0;
//}



//����
//int Add(int x, int y)
//{
//	int sum = 0;
//	sum = x + y;
//	return 0;
//}

//������
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	//����
//	scanf("%d,%d", &num1, &num2);
//	//���
//	int sum = Add(num1, num2);
//	//���
//	printf("%d + %d = %d", num1, num2, sum);
//	return 0;
//}


//����
//int main()
//{
//	int a = 10, b = 20, c = 30;
//	int arr[] = {1,8,3,4,5,6};
//	printf("%d\n", arr[5]);
//	int i = 0;
//	//while (i <= 5)
//	//{
//	//	printf("%d", arr[i]);
//	//	i++;
//	//}
//	for (i = 0;i < 6;)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	printf("     **\n");
//	printf("     **\n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *    \n");
//	printf("    *  *    \n");
//	return 0;
//}



//int main()
//{
//	printf("Name    Age    Gender\n");
//	int i = 1;
//	while (i < 22)
//	{
//		printf("-");
//		i++;
//	}
//	printf("\nJcak    18     man\n");
//	return 0;
//}



//int main()
//{
//	int a = 40, c = 212;
//	int result = (-8 + 22) * a - 10 + c / 2;
//	printf("%d", result);
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcc";
//	int i = 0;
//	while (i < 5)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello world";
//	printf("%s", arr);
//	return 0;
//}

//int Max(int a, int b)
//{
//	if (a < b)
//	{
//		printf("b��a��");
//		return b;
//	}
//	else
//	{
//		printf("a��b��");
//		return a;
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("������a��ֵ��");
//	scanf("%d",& a);
//	printf("������b��ֵ��");
//	scanf("%d", &b);
//	int max = Max(a, b);
//	printf("Ϊ%d", max);
//	return 0;
//}



//int f(int x)
//{
//	if (x < 0)
//	{
//		return 1;
//	}
//	else if(x = 0)
//	{
//		return 0;
//	}
//	else
//	{
//		return -1;
//	}
//}
//int main()
//{
//	printf("������xֵ:");
//	int x;
//	scanf("%d", &x);
//	int y = f(x);
//	printf("f(%d)=%d", x, y);
//	return 0;
//}


//int main()
//{
//	int a = 7 / 2;
//	float c = 7.0 / 3;
//	int b = 7 % 2;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%.5f\n", c);
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	a += 1;
//	printf("%d", a);
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int b = ++a;//ǰ��++����++����ʹ��
//	//int b = a++;//����++����ʹ�ã���++
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//���渡������Ĭ��double����
//int main()
//{
//	int a = (int)3.14;//ǿ������ת��
//	printf("%d", a);
//	return 0;



//int main()
//{
//	//�߼���&&
//	//�߼���||
//	int a = 10;
//	int b = 20;
//	//if (a == 10 && b == 19)
//	if (a == 10 || b == 19)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int b = 20;
//	int r = a > b ? a : b;//��Ŀ������
//	return 0;
//}


//int main()
//{
//	//���ű��ʽ�������������μ���,��������һ�����ʽ�Ľ��
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	int d = (c = a - 2, a = b +c ,c - 3);
//	printf("%d", d);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,2,4,5,7,5 };
//	int c = arr[3];
//	printf("%d", c);
//	return 0;
//}


////�ؼ���typedef
////����������
//typedef  unsigned int uint;
//int main()
//{
//	unsigned int b = 30;
//	uint a = 10;
//	return 0;
//}


//static
//static���ξֲ�����ʱ���ֲ�������������������,���ǳ�����������Ч
//static����ȫ�ֱ���ʱ�����ȫ�ֱ������ⲿ�������Ծͱ�����ڲ��������ԣ�����Դ�ļ��Ͳ������õ����ȫ�ֱ���
//static���κ���ʱ
//void test()
//{
//	static int a = 1;
//	printf("%d\n",a);
//	a++;
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

//extern int Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int z = Add(a, b);
//	printf("%d", z);
//	return 0;
//}


////register
//int main()
//{
//	register int num = 3;//�����3����ڼĴ�����
//	return 0;
//}

////define �����ʶ������
//#define NUM 100
////define�����
//#define ADD(x,y) ((x)+(y))
//int main()
//{
//	//printf("%d\n", NUM);
//	//int n = NUM;
//	//printf("%d\n", n);
//	//int arr[NUM] = { 0 };
//
//	int a = 10;
//	int b = 15;
//	int sum = ADD(a, b);
//	printf("%d", sum);
//	return 0;
//}





//ָ��

//int main()
//{
//	int a = 10;
//	int* p = &a;//ȡ��ַ
//	//p����ָ�����
//	//���ָ�루��ַ���ı�������ָ�����
//	printf("%p\n", p);
//	*p = 20;//�����ò�������ͨ��p�д�ŵĵ�ַ�ҵ�p��ָ��Ķ���*p����pָ��Ķ���
//	printf("%d", a);
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%zu\n", sizeof(char*));
//	printf("%zu\n", sizeof(short*));
//	printf("%zu\n", sizeof(long*));
//	printf("%zu\n", sizeof(int*));
//	printf("%zu\n", sizeof(double*));
//	printf("%zd\n", sizeof(float*));
//	return 0;
//}


////�ṹ��
//typedef struct Stu
//{
//	//��Ա
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
// } Stu;
//
//void print(struct Stu* ps)
//{
//	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
//	printf("%s %d %s %s\n", ps->name,ps->age,ps->sex,ps->tele);
//}
//int main()
//{
//	Stu No1 = {"zhangsan",20,"nan","18854651523"};
//	printf("%s %d %s %s\n", No1.name, No1.age, No1.sex, No1.tele);
//	print(&No1);
//	return 0;
//}



int main()
{
	int a = 0;
	int b = 0;
	printf("������a��ֵ��");
	scanf("%d", &a);
	printf("������b��ֵ��");
	scanf("%d", &b);
	int c = a / b;
	int d = a % b;
	printf("a����b��������Ϊ��%d\n����Ϊ��%d\n", c, d);
	return 0;
}