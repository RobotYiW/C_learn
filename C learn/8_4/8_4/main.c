#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//int main()
//{
//	char c = 33;
//	printf("%c ", c);
//	strlen("adv");
//	return 0;
//} 



//void move_odd_even(int arr[], int n)
//{
//	int left = 0;
//	int right = n - 1;
//	while (left < right)
//	{
//		while ((left < right) && (arr[left] % 2))
//		{
//			left++;
//		}
//		while (!(arr[right] % 2))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[right];
//			arr[right] = arr[left];
//			arr[left] = tmp;
//		}
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int K = 0;
//	scanf("%d", &K);
//	int arr[10] = {0};
//	int brr[10] = { 0 };
//	for (int i = 0; i < K; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//
//	move_odd_even(arr, sz);
//
//	for (int i = 0; i < K; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	
//	return 0;
//}



int main()
{
    int m = 0;
    int n = 0;
    scanf("%d %d", &m, &n);
    int arr1[10];
    int arr2[10];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int j = 0; j < n; j++)
    {
        scanf("%d", &arr2[j]);
    }
    int arr3[20];
    int a = 0;
    int b = 0;
    for (int x = 0; x < m + n; x++)
    {
        if (a < m && b < n)
        {
            if (arr1[a] < arr2[b])
            {
                arr3[x] = arr1[a];
                a++;
            }
            else
            {
                arr3[x] = arr2[b];
                b++;
            }
        }
        else if (b < n)
        {
            arr3[x] = arr2[b];
            b++;
        }
        else if (a < m)
        {
            arr3[x] = arr1[a];
            a++;
        }
    }
    for (int x = 0; x < m + n; x++)
    {
        printf("%d ", arr3[x]);
    }
    return 0;
}