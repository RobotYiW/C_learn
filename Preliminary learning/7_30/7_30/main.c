#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int a = 10;
//	float* pf = &a;
//	int* pi = &a;
//	char* pc = NULL;
//	printf("%zu", sizeof(char*));
//	int* pa = &a;  //pa是指针变量
//	*pf = 100.0;
//	float c = 100.0f;
//	return 0;
//}


//int main()
//{
//	int a = 100;
//	int* pa = &a;
//	int** ppa = &pa;//ppa是二级指针变量
//	**ppa = 20;
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	int arr1[4] = { 1,2,3,4 };
//	int arr2[4] = { 2,3,4,5 };
//	int arr3[4] = { 3,4,5,6 };
//	
//	int* parr[] = { arr1, arr2, arr3 };
//	int sz = sizeof(parr) / sizeof(parr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		for (int j = 0; j < 4; j++)
//			printf("%d ", parr[i][j]);
//		printf("\n");
//	}
//	return 0;
//}



//struct peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];  //保证是字符串，需要\0，所以需要的空间+1
//	int high;
//};
//struct stu
//{
//	struct peo p1;
//	int num;
//	float f;
//};
//void print(struct peo* sp)
//{
//	printf("%s %s %s %d\n", sp->name, sp->tele, sp->sex, sp->high);
//	printf("%s %s %s %d",(*sp).name,(*sp).tele,(*sp).sex,(*sp).high);
//}
//int main()
//{
//	struct peo p1 = { "张三","15648752456","男",155 };
//	struct stu s = { {"李四","14526458845","女",150},100,3.14f };
//	printf("name\t= %s\ntele\t= %s\nsex\t= %s\nhigh\t= %d",p1.name,p1.tele, p1.sex, p1.high);
//	printf("\n%s\n", s.p1.name);
//	print(&p1);
//	return 0;
//}




//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d", &m);
//	scanf("%d", &n);
//	int c = m ^ n;
//	int count = 0;
//	int num = 1;
//	for (int i = 1; i < 32; i++)
//	{
//		if ((c & num) == num)
//			count++;
//		num = num << 1;
//	}
//	printf("%d ", count);
//	return 0;
//}


////计算二进制数中1的个数，负数补码
//int numof1(unsigned int n)
//{
//	if (n != 0)
//		return n % 2 + numof1(n / 2);
//	else
//		return 0;
//}
//int numof2(int n)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int numof3(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	int num = numof1(m);
//	int num2 = numof2(m);
//	int num3 = numof3(m);
//	printf("%d\n", num);
//	printf("%d\n", num2);
//	printf("%d\n", num3);
//	return 0;
//}

//判断一个数是不是2的n次方
//if((n & (n - 1) == 0)   //n & (n-1)会去掉一个1


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("奇数位:");
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		int m = ((n >> i) & 1);
//		printf("%d ", m);
//	}
//	printf("\n偶数位:");
//	for (int i = 31; i >= 1; i -= 2)
//	{
//		int m = ((n >> i) & 1);
//		printf("%d ", m);
//	}
//	return 0;
//}

//int main()
//{
//	int m = 0;
//	while (scanf("%d", &m) == 1)
//	{
//		for (int i = 0; i < m; i++)
//		{
//			for (int j = 0; j < m; j++)
//			{
//				if (i + j == m - 1)
//					printf("*");
//				else if (i == j)
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int year = 0;
//	int month = 0;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (scanf("%d %d", &year, &month) == 2)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//			days[2] = 29;
//		else
//			days[2] = 28;
//		int d = days[month];
//		printf("%d\n", d);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}	
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 0;
//	int sum = 1;
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//		ret += sum;
//	}
//	printf("%d", ret);
//	return 0;
//}


#include <string.h>
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
//#include <assert.h>
//void my_strcpy(char* dest,const char* src)
//{
//	assert(src != NULL);
//	while (*dest++ = *src++);
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello,bit";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}


//int main()
//{
//	const int arr[10] = { 0 };
//	arr[0] = 1;
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) == 3)
//	{
//		if ((a + b > c) && (a + c > b) && (b + c > a))
//		{
//			if (a == b && b == c)
//				printf("Equilateral triangle\n");
//			else if (a == b || b == c || a == c)
//				printf("Isosceles triangle!\n");
//			else
//				printf("Ordinary triangle!\n");
//		}
//		else
//			printf("Not a triangle!\n");
//	}
//
//	return 0;
//}



//int main()
//{
//	char arr[10001] = { 0 };
//	//scanf("%s", &arr);
//	gets(arr);//读取，内容放在arr
//	int sz = strlen(arr);
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	printf("%s\n", arr);
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int tmp = 0;
//	int Sn = 0;
//	for (int i = 0; i < n; i++)
//	{
//		tmp = tmp * 10 + a;
//		Sn += tmp;
//	}
//	printf("%d", Sn);
//	return 0;
//}


//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int arr[6] = { 0 };
//		int j = 0;
//		int tmp = i;
//		while (tmp > 0)
//		{
//			arr[j] = tmp % 10;
//			j++;
//			tmp /= 10;
//		}
//		int sum = 0;
//		for (int x = 0; x < j; x++)
//		{
//			sum += pow(arr[x], j);
//		}
//		if (i == sum)
//			printf("%d ", i);
//
//	}
//}



//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * i - 1; j++)
//			printf("*");
//		printf("\n");
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		int j = 0;
//		for (int j = 0; j < i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (n - 1 - i) - 1; j++)
//			printf("*");
//		printf("\n");
//	}
//
//	return 0;
//}





//int main()
//{
//	int price = 0;
//	scanf("%d", &price);
//	int ret = price;
//	int bottle = price;
//	while (bottle > 1)
//	{
//		ret += bottle / 2;
//		bottle -= bottle/2;
//	}
//	printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 1;
//	while (a * i % b)
//		i++;
//	printf("%d", a * i);
//	return 0;
//}


//void print(char* arr)
//{
//	int i = 0;
//	while (*(arr + i) != '\0' && *(arr + i) != ' ')
//		i++;
//	if (*(arr + i) == ' ')
//	{
//		print(arr + i + 1);
//		for (int j = 0; j < i; j++)
//			printf("%c", *(arr + j));
//	}
//
//	else if (*(arr + i) == '\0')
//	{
//		for (int j = 0; j < i; j++)
//			printf("%c", *(arr + j));
//	}
//	printf(" ");
//	i++;
//}
//int main()
//{
//	char arr[101] = { 0 };
//	gets(arr);
//	print(arr);
//	return 0;
//}


#include<string.h>
void reverse(char* left,char* right)
{
	while (left < right)
	{
		int tmp = *right;
		*right = *left;
		*left = tmp;
		right--;
		left++;
	}
}
int main()
{
	char arr[101] = { 0 };
	gets(arr);
	int sz = strlen(arr);
	reverse(arr, arr + sz - 1);
	char* start = arr;
	char* end = arr;
	while (*start)
	{
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if(*end != "\0")
			end++;
		start = end;
	}
	printf("%s", arr);
	return 0;
}