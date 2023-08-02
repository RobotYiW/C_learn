#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////打印一个数的每一位
//void num(int n)
//{
//	if (n / 10 < 1)
//		printf("%d\n", n);
//	else
//	{
//		num(n / 10);
//		printf("%d\n", n % 10);
//	}
//}
//int main()
//{
//	int a = 12456;
//	num(a);
//	return 0;
//}




//int main()
//{
//	char arr[] = "abcdef";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 2;
//	while (left < right)
//	{
//		char tmp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = tmp;
//		left++;
//		right--;
//	}
//	printf("%s", arr);
//	return 0;
//}


#include <string.h>
//void reverse(char* str)
//{
//	char tmp = *str;
//	int len = strlen(str);
//	*str = *(str + len - 1);
//	* (str + len - 1) = '\0';
//	if (len >= 3)
//		reverse(str + 1);
//	*(str + len - 1) = tmp;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse(arr);
//	printf("%s", arr);
//	return 0;
//}





//int DigitSum(int n)
//{
//	int sum = 0;
//	if (n / 10 < 1)
//	{
//		return n;
//	}
//	else
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//}
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	int sum = DigitSum(n);
//	printf("%u", sum);
//	return 0;
//}



//double Pow(int n, int k)
//{
//	if (k > 0)
//		return Pow(n, k - 1) * n;
//	else if (k == 0)
//		return 1;
//	else
//		return 1.0 / Pow(n, -k);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}

