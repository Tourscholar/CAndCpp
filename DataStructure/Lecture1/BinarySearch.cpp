#include <iostream>
#include <cstdlib>

/*
算法的时间复杂度为O(logN), 二分查找的前提条件：
    1. 存储方式为顺序存储，不能是链式存储！
    2. 数据是有序的！
*/
using namespace std;
#define MAXSIZE 10
#define NotFound 0

typedef int ElementType;

typedef int Position;
typedef struct LNode * List;
struct LNode{
    ElementType Data[MAXSIZE];
    Position Last;      /* 保存线性表中最后一个元素的位置 */
};

List ReadInput();
void FreeList(List L);
Position BinarySearch(List L, ElementType X);

int main()
{
    List L;
    ElementType X;
    Position p;

    L = ReadInput();
    cin >> X;
    p = BinarySearch(L, X);
    cout << p << endl;

    FreeList(L);

    return 0;
}

List ReadInput()
{
    int N;
    int i;
    ElementType tmp;
    List L = new LNode[sizeof(struct LNode)];
    cin >> N;
    L->Last = N;
    for (i = 0; i < N; i++)
    {
        cin >> tmp;
        L->Data[i+1] = tmp;
    }

    return L;
}
void FreeList(List L)
{
    delete L;
}

Position BinarySearch(List L, ElementType X)
{
    Position left = 1, right = L->Last;
    Position pos = NotFound;

    while (right >= left)
    {
        Position mid = (left+right) / 2;
        if (L->Data[mid] == X)
        {
            pos = mid;
            break;
        }
        else if (L->Data[mid] > X)
        {
            right = mid - 1;
        }
        else if (L->Data[mid] < X)
        {
            left = mid + 1;
        }
    }
    return pos;
}