#include <iostream>
using namespace std;

void swap(char[], char);
void pertation(char[], int, int);

/**
 * 递归实现排列生成器
 */

int main()
{
    char arr[] = {'a', 'b', 'c', 'd'};
    int length = sizeof(arr) / sizeof(arr[0]);
    pertation(arr, 0, length - 1);

    return 0;
}

void swap(char * a, char * b)
{
    char * temp;
    temp = a;
    a = b;
    b = temp;
}

void pertation(char * a, int k, int m)
{
    if(k==m){
        for(int i = 0; i <= m; i++)
            cout << a[i] << " ";
        cout << endl;
    }
    else{
        for(int i = k; i <= m; i++){
            swap(a[i], a[k]);
            pertation(a, k+1, m);
            swap(a[i], a[k]);
        }
    }
}