#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int a = 7%2;
//	int b = 7/2;
//	printf("%d %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = -7;
//	int b = a >> 1;
//	int c = a << 1; 
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	int a = -7;
//	int b = 3; 
//	int c = a ^ b;
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	char a = 129;
//	printf("%d \n", a);
//	return 0;
//}

//int main()
//{
//	char a = 0x01;
//	if (a = 0x01)
//		printf("%d \n", a);
//	return 0;
//}




//int func_1(int n)
//{
//	if (n <= 2)
//		return n;
//	else 
//		return func_1(n - 1) + func_1(n - 2);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = func_1(a);
//	printf("%d\n", b);
//	return 0;
//}




//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	int arr[50];
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int a = 0;
//	scanf("%d", &a);
//	for (int i = 0; i < N; i++)
//	{
//		if(arr[i] != a)
//			printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	int arr[10000];
//	int i = 0;
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	int min = arr[0];
//	for (i = 0; i < N; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//		if (arr[i] < min)
//			min = arr[i];
//	}
//	printf("%d", max - min);
//	return 0;
//}


//#include <ctype.h>
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)
//	{
//		//if (ch >= 'a' && ch <= 'z')
//		if (islower(ch))
//			printf("%c\n", ch - 32);
//		else if(isupper(ch))
//		//else
//			printf("%c\n", tolower(ch));
//		getchar();//读走\n
//	}
//	return 0;
//}

//#include <ctype.h>
//int main()
//{
//	char ch = 0;
//	while (scanf(" %c", &ch) == 1)
//		//%c前面加空格，跳过下一个字符之前的所有空白字符
//	{
//		if (isupper(ch) || islower(ch))
//		//if(isalpha(ch))
//			printf("%c is an alphabet.\n", ch);
//		else
//			printf("%c is not an alphabet.\n", ch);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int max = 0;
//	int score = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &score);
//		if (score > max)
//			max = score;
//	}
//	printf("%d", max);
//	return 0;
//}



//int is_lily1(int n,int x)
//{
//	if (n / x >= 1)
//		return is_lily1(n, 10 * x) + (n / x) * (n % x);
//}
//int is_lily(int n)
//{
//	if (is_lily1(n,10) == n)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	for (int i = 10000; i < 100000; i++)
//		if (is_lily(i))
//			printf("%d\n", i);
//	return 0;
//}



