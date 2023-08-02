#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);	
//	for (i = 0; i < sz; i++)
//		printf("&arr[%d] = %p\n",i, &arr[i]);
//	printf("%d", sizeof('a'));
//	return 0;
//}




//int main()
//{
//	int arr1[3][4] = { {1,2,3,4},{2,3,4,5},{3,4,5,6} };
//	char arr2[][4] = { "arr","aca",{'a','s','f'} };
//	int arr13[][4] = { {1,2,3},4,5,6,7,8,9,10 };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//			printf("%d ", arr1[i][j]);
//		printf("\n");
//	} 
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//			printf("&arr[%d][%d] = %p\n",i,j, &arr1[i][j]);
//		printf("\n");
//	}
//	return 0;
//}


////Ã°ÅÝÅÅÐò
//void bubble_sort(int arr[],int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if(arr[j]>arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,4,7,5,6,2,1,2,4 };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	bubble_sort(arr,sz);
//	for (int i = 0; i < sz; i++)
//		printf("%d", arr[i]);
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 22,2,4,5 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);
//	int n = sizeof(arr);
//	printf("%d\n", n);
//	printf("%p\n", *arr);
//	return 0;
//}


//int main()
//{
//	int arr[3][4];
//	int sz = sizeof(arr);
//	int sz1 = sizeof(arr) / sizeof(arr[0]);
//	int sz2 = sizeof(arr[0]) / sizeof(arr[0][0]);
//	printf("%d\n", sz);
//	printf("ÐÐ = %d\n", sz1);
//	printf("ÁÐ = %d\n", sz2);
//	return 0;
//}



//int main()
//{
//
//	return 0;
//}