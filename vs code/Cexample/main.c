#include <stdio.h>
int Max3(int a, int b, int c)
{
    return a > b ? (a > c ? a : c) : (b > c ? b : c);
}

int DivideAndConquer(int arr[], int left, int right)
{
    //终止条件
    if (left == right)
    {
        if (arr[right] < 0)
            return 0;
        else
            return arr[right];
    }
    //两边
    int center = (right + left) / 2;
    int MaxLeftSum = DivideAndConquer(arr, left, center - 1);
    int MaxRightSum = DivideAndConquer(arr, center, right);

    //跨线
    //跨左边
    int MaxLeftBoardSum = 0;
    int LeftBoardSum = 0;
    for (int i = center; i >= left; i--)
    {
        LeftBoardSum += arr[i];
        if (LeftBoardSum > MaxLeftBoardSum)
            MaxLeftBoardSum = LeftBoardSum;
    }
    //跨右边
    int MaxRightBoardSum = 0;
    int RightBoardSum = 0;
    for (int i = center; i <= right; i++)
    {
        RightBoardSum += arr[i];
        if (RightBoardSum > MaxRightBoardSum)
            MaxRightBoardSum = RightBoardSum;
    }
    return Max3(MaxLeftBoardSum + MaxRightBoardSum, MaxLeftSum, MaxRightSum);
}
int MAX1(int arr[], int N)
{
    return DivideAndConquer(arr, 0, N - 1);
}
int main()
{
    int K = 0;
    scanf("%d", &K);
    int arr[K];
    int i = 0;
    for (i = 0; i < K; i++)
    {
        scanf("%d", &arr[i]);
    }
    int MaxSum = MAX1(arr, K);
    printf("%d", MaxSum);
	return 0;
}