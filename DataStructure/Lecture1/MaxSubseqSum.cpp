#include <iostream>
/**
 * 最大连续子序列和问题的三种算法
 * 给定N个整数的序列{A1,A2,...AN},求函数f(i,j)=max{0,Ai+A(i+1)+...Ak}的最大值
 */

int MaxSubseqSum1(int A[], int N);
int MaxSubseqSum2(int A[], int N);
int MaxSubseqSum3(int A[], int N);
int MaxSubseqSum4(int A[], int N);
int DivideAndConquer(int List[], int left, int right);
int Max3(int A, int B, int C);
 /* 时间复杂度 T(N) = O(N^3) */
int MaxSubseqSum1(int A[], int N)
{
    int ThisSum, MaxSum = 0;
    int i, j, k;
    for (i = 0; i < N; i++)     /* i是子列左端位置 */
    {
        for (j = i; j < N; j++)     /* j是子列右端位置 */
        {
            ThisSum = 0;    /* ThisSum是从A[i]到A[j]的子列和 */
            for (k = i; k <= j; k++)
                ThisSum += A[k];
            if (ThisSum > MaxSum)   /* 如果刚得到的这个子列和更大 */
                MaxSum = ThisSum;   /* 则更新结果 */
        }    /* j循环结束 */
    }        /* i循环结束 */
    return MaxSum;
}


 /* 时间复杂度 T(N) = O(N^2) */
int MaxSubseqSum2(int A[], int N)
{
    int ThisSum, MaxSum = 0;
    int i, j;
    for (i = 0; i < N; i++)     /* i是子列左端位置 */
    {
        ThisSum = 0;    /* ThisSum是从A[i]到A[j]的子列和 */
        for (j = i; j < N; j++)      /* j是子列右端位置 */
        {
            ThisSum += A[j];    /* 对于相同的i, 不同的j, 只要j-1此循环的基础上累加1项即可 */
            if (ThisSum > MaxSum)    /* 如果刚得到的这个子列和更大 */
                MaxSum = ThisSum;   /* 则更新结果 */ 
        }    /* j循环结束 */
    }        /* i循环结束 */
    return MaxSum;
}

/* 时间复杂度 T(N) = O(NlogN) */
int DivideAndConquer(int List[], int left, int right)
{
    int MaxLefSum, MaxRightSum;     /* 存放左右子问题的解 */
    int MaxLeftBorderSum, MaxRightBorderSum;    /* 存放跨分界线的结果 */

    int LeftBorderSum, RightBorderSum;
    int center, i;

    if (left == right)
    {
        /* 递归的终止条件, 子列只有1个数字 */
        if (List[left] > 0)
            return List[left];
        else 
            return 0;
    }
    /* 下面是"分"过程 */
    center = (left + right) / 2;     /* 找到中分点 */
    MaxLefSum = DivideAndConquer(List, left, right);
    MaxRightSum = DivideAndConquer(List, center+1, right);

    /* 下面求跨分界线的最大子列和 */
    MaxLeftBorderSum = 0;
    LeftBorderSum = 0;
    for (i = center; i >= left; i--)
    {
        LeftBorderSum += List[i];
        if (LeftBorderSum > MaxLeftBorderSum)
            MaxLeftBorderSum = RightBorderSum;
    }    /* 右边扫描结束 */

     /* 下面返回"治"的结果 */
    return Max3(MaxLefSum, MaxRightSum, MaxLeftBorderSum+MaxRightBorderSum);
}

int Max3(int A, int B, int C)
{
    /* 返回3个整数中的最大值 */
    return A > B ? A > C ? A : C : B > C ? B : C;
}

int MaxSubseqSum3(int A[], int N)
{
    return DivideAndConquer(A, 0, N-1);
}


/* 时间复杂度 T(N) = O(N) */
int MaxSubseqSum4(int A[], int N)
{
    int ThisSum, MaxSum;
    int i;
    ThisSum = MaxSum = 0;
    for (i = 0; i < N; i++)
    {
        ThisSum += A[i];    /* 向右累加 */
        if (ThisSum > MaxSum)
            MaxSum = ThisSum;   /* 发现更大和则更新当前结果 */
        else if (ThisSum < 0)
            ThisSum = 0;        /* 则不可能使后面的部分和增大, 抛弃之 */
    }
    return MaxSum;
}