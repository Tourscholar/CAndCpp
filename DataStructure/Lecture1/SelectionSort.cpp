#include <iostream>
using namespace std;

int main(){
    int arr [] = {4,5,1,2,3,7,6,9,8};
    int length = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < length; i++){
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
    cout << endl;
    for(int i = 0; i < length; i++){
        cout << arr[i] << " ";
    }
    return 0;
}