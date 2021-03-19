#include <iostream>
using namespace std;

int BinarySearch(int[], int, int);
/**
 * 选择排序
 */

int main(){
    int arr [] = {4,5,1,2,3,7,6,9,8};
    int length = sizeof(arr) / sizeof(arr[0]);
    /*for(int i = 0; i < length; i++){
        int MinPos = i;

        for(int j = i+1; j < length; j++){
            if(arr[j] < arr[MinPos])
                MinPos = j;

        }
        cout << MinPos << " ";
        int tmp = arr[i];
        arr[i] = arr[MinPos];
        arr[MinPos] = tmp;
    }
    */
    cout << endl;
    cout << BinarySearch(arr, length, 9) << endl;
    for(int i = 0; i < length; i++)
        cout << arr[i] << " ";
    return 0;
}
/**
 * 二分搜索
 */
int BinarySearch(int * arrs, int numsize, int target){
    int right = numsize - 1;
    int left = 0;
    int mid = 0;
    while(left <= right){
        mid = (left + right) / 2;
        if(arrs[mid] == target)
            return mid;
        else if(arrs[mid] > target)
            right = mid - 1;
        else if(arrs[mid] < target)
            left = mid + 1;
    }
    return -1;
}