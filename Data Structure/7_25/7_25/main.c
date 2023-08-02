#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <time.h>
//
//clock_t start, stop;
//double duration;;
//
//void MyFunction(int x);
//int main()
//{
//	start = clock();
//	MyFunction(12);
//	stop = clock();
//	duration = ((double)(stop - start)) / CLK_TCK;
//	return 0;
//}






//最大子列和问题
#include <stdio.h>
//方案一
//int main()
//{
//    int K = 0;
//    scanf("%d", &K);
//    int arr[K];
//    int i = 0;
//    int j = 0;
//    int MaxSum = 0;
//    for (i = 0; i < K; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < K; i++)
//    {
//        for (j = i; j < K; j++)
//        {
//            int ThisSum = 0;
//            for (int n = i; n <= j; n++)
//            {
//                ThisSum += arr[n];
//                if (ThisSum > MaxSum)
//                    MaxSum = ThisSum;
//            }
//        }
//    }
//    if (MaxSum < 0)
//        MaxSum = 0;
//    printf("%d", MaxSum);
//    return 0;
//}
//}

//方案二
//int main()
//{
//    int K = 0;
//    scanf("%d", &K);
//    int arr[K];
//    int i = 0;
//    int j = 0;
//    int MaxSum = 0;
//    for (i = 0; i < K; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < K; i++)
//    {
//        int ThisSum = 0;
//        for (j = i; j < K; j++)
//        {
//            ThisSum += arr[j];
//            if (ThisSum > MaxSum)
//                MaxSum = ThisSum;
//        }
//    }
//    if (MaxSum < 0)
//        MaxSum = 0;
//    printf("%d", MaxSum);
//    return 0;
//}



//方案三
//int Max3(int a, int b, int c)
//{
//    return a > b ? (a > c ? a : c) : (b > c ? b : c);
//}
//
//int DivideAndConquer(int arr[], int left, int right)
//{
//    //终止条件
//    if (left == right)
//    {
//        if (arr[right] < 0)
//            return 0;
//        else
//            return arr[right];
//    }
//    //两边
//    int center = (right + left) / 2;
//    int MaxLeftSum = DivideAndConquer(arr, left, center);
//    int MaxRightSum = DivideAndConquer(arr, center+1, right);
//
//    //跨线
//    //跨左边
//    int MaxLeftBoardSum = 0;
//    int LeftBoardSum = 0;
//    for (int i = center; i >= left; i--)
//    {
//        LeftBoardSum += arr[i];
//        if (LeftBoardSum > MaxLeftBoardSum)
//            MaxLeftBoardSum = LeftBoardSum;
//    }
//    //跨右边
//    int MaxRightBoardSum = 0;
//    int RightBoardSum = 0;
//    for (int i = center + 1; i <= right; i++)
//    {
//        RightBoardSum += arr[i];
//        if (RightBoardSum > MaxRightBoardSum)
//            MaxRightBoardSum = RightBoardSum;
//    }
//    return Max3(MaxLeftBoardSum + MaxRightBoardSum, MaxLeftSum, MaxRightSum);
//}
//
//int MAX1(int arr[], int N)
//{
//    return DivideAndConquer(arr, 0, N - 1);
//}
//
//int main()
//{
//    int K = 0;
//    scanf("%d", &K);
//    int arr[K];
//    int i = 0;
//    for (i = 0; i < K; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int MaxSum = MAX1(arr, K);
//    printf("%d", MaxSum);
//	return 0;
//}






//方案四
//int main()
//{
//    int K = 0;
//    scanf("%d", &K);
//    int arr[6];
//    int i = 0;
//    int ThisSum = 0;
//    int MaxSum = 0;
//    for (i = 0; i < K; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < K; i++)
//    {
//        ThisSum += arr[i];
//        if (ThisSum < 0)
//        {
//            ThisSum = 0;
//        }
//        if (ThisSum > MaxSum)
//            MaxSum = ThisSum;
//    }
//    printf("%d", MaxSum);
//    return 0;
//}


//PTA题目
//int main()
//{
//    int K = 0;
//    scanf("%d", &K);
//    int arr[3];
//    int i = 0;
//    int ThisSum = 0;
//    int MaxSum = 0;
//    int flag = 0;
//    int flag1 = 0;
//    int a = 0;
//    for (i = 0; i < K; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int right = arr[K - 1], left = arr[0];
//    int tmp_left = arr[0];
//    for (i = 0; i < K; i++)
//    {
//        ThisSum += arr[i];
//        if (ThisSum == 0)
//        {
//            flag++;
//            if(flag == 1)
//            {
//                flag1 = 1;
//                a = arr[i];
//            }
//        }
//        if (ThisSum < 0)
//        {
//            ThisSum = 0;
//            tmp_left = arr[i + 1];
//        }
//        if (ThisSum > MaxSum)
//        {
//            MaxSum = ThisSum;
//            right = arr[i];
//            left = tmp_left;
//        }
//    }
//
//    if (MaxSum == 0 && flag1)
//        right = left = a;
//    printf("%d %d %d", MaxSum, left, right);
//    return 0;
//}



//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[n] = 0;
//	int i = 0;
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	return 0;
//}