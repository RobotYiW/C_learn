#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello,bit";
//	strcpy(arr1,arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr[20] = "hello world";
//	memset(arr+6, 'x', 3);
//	printf("%s\n", arr);
//	return 0;
//}



//int get_max(int x,int y)
//{
//	//if (x > y)
//	//	return x;
//	//else
//	//	return y;
//	return(x > y ? x : y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = get_max(a, b);
//	printf("最大值为%d", m);
//	return 0;
//}




//void exchange(int* px, int* py)//形式参数
//{
//	int m = *px;
//	*px = *py;
//	*py = m;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前,a = %d,b = %d\n", a, b);
//	exchange(&a, &b);//实参
//	printf("交换后,a = %d,b = %d\n", a, b);
//	return 0; 
//}




//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 1;//flag为1，表示是素数
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("100到200有%d个素数\n", count);
//	return 0;
//}




#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 199; i+=2)
//	{
//		int j = 0;
//		int flag = 1;//flag为1，表示是素数
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("100到200有%d个素数\n", count);
//	return 0;
//}

//int is_prime(int x)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i))
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("100到200有%d个素数\n", count);
//	return 0;
//}



//int is_leap_year(int i)
//{
//	if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (is_leap_year(i))
//			printf("%d ", i);
//
//	}
//
//	return 0;
//}



////整形有序数组二分查找
//int binary_search(int arr[], int k, int sz)
//{
//	int right = sz - 1;
//	int left = 0;
//	arr[0] = 2;
//	while(right >=left )
//	{
//		int middle = left + (right - left) / 2;
//		if (arr[middle] > k)
//			right = middle - 1;
//		else if (arr[middle] < k)
//			left = middle + 1;
//		else
//			return middle;
//	}
//	return -1;
//
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr,k,sz);
//	if (ret == -1)
//		printf("找不到\n");
//	else
//		printf("找到了，下标是：%d\n", ret);
//	printf("%d", arr[0]);
//	return 0;
//}


//递归
//void print(unsigned int n)
//{
//	if (n >= 10)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%u", &num);
//	print(num);
//
//	return 0;
//}



//int my_strlen(char* str)
//{
//	/*int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;*/
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//
//}
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}




//int fac(int n)
//{
////	if (n > 1)
////	{
////		return n * fac(n - 1);
////	}
////	else
////		return 1;
////
//	int ret = 1;
//	while (n > 1)
//	{
//		ret = ret * n;
//		n--;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("ret = %d", ret);
//	return 0;
//}






//int Fib(int n)
//{
//	//if (n <= 2)
//	//	return 1;
//	//else
//	//	return Fib(n - 1) + Fib(n - 2);
//	int a = 1;
//	int b = 1;
//	int c = a + b;
//	for (int i = 3; i <= n; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//
//	if (n <= 2)
//		return 1;
//	else
//		return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("ret = %d", ret);
//	return 0;
//}




////汉诺塔问题
//void move(char pos1, char pos2)
//{
//	printf("%c -> %c   ", pos1, pos2);
//}
///*
//n:盘子个数
//pos1:起始位置
//pos2:中转位置
//pos3:目的位置
//*/
//void hanoi(int n, char pos1, char pos2, char pos3)
//{
//	if (n == 1)
//	{
//		move(pos1, pos3);
//	}
//	else
//	{
//		hanoi(n - 1, pos1, pos3, pos2);
//		move(pos1, pos3);
//		hanoi(n - 1, pos2, pos1, pos3);
//	}
//}
//int main()
//{
//	int n = 0;
//	//scanf("%d", &n);
//	hanoi(1,'A','B','C');
//	printf("\n");
//	hanoi(2, 'A', 'B', 'C');
//	printf("\n");
//	hanoi(3, 'A', 'B', 'C');
//	printf("\n");
//	hanoi(4, 'A', 'B', 'C');
//	printf("\n");
//	hanoi(5, 'A', 'B', 'C');
//	printf("\n");
//	hanoi(6, 'A', 'B', 'C');
//	printf("\n");
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int b = 0;
//	switch (a)
//	{
//	case 1: 
//		b = 16;
//	default:
//		b = 20;
//		break;
//	case 2: 
//		b = 0;
//	}
//	printf("%d", b);
//	return 0;
//}



//void swap(int* a,int* b)
//{
//	int tmp = *b;
//	*b = *a;
//	*a = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		swap(&a, &b);
//	}
//	if (a < c)
//	{
//		swap(&a, &c);
//	}
//	if (b < c)
//	{
//		swap(&b, &c);
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}




//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int min = (a < b) ? a : b;
//	while (1)
//	{
//		if (a % min == 0 && b % min == 0)
//			break;
//		min--;
//	}
//	printf("%d", min);
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = 0;
//	//辗转相除法
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d", b);
//	return 0;
//}



//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9)
//			count++;
//		if (i % 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}




//int main()
//{
//	int i = 0;
//	double count = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i += 1)
//	{
//		count += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", count);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,12,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i <= 8; i++)
//	{
//		if (arr[i] > arr[i + 1])
//			arr[i + 1] = arr[i];
//	}
//	printf("%d", arr[9]);
//	return 0;
//}


//九九乘法表
//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		 	printf("%d * %d = %-2d  ", j, i,i*j);//%-2d 左对齐
//		printf("\n");
//	}
//	return 0; 
//}


int main()
{

	return 0;
}