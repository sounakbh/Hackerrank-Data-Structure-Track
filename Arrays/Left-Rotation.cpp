#include <iostream>
using namespace std;

void reverseArray(long int arr[], long int start, long int end){
    long int temp;
    while(start < end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        end--;
        start++;
    }
}

void rotateArray(long int arr[], long int d, long int n){
    reverseArray(arr, 0, d - 1);
    reverseArray(arr, d, n - 1);
    reverseArray(arr, 0, n - 1);
}

void printArray(long int arr[], long int n){
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main(){
    long int n, d;
    cin >> n >> d;
    long int arr[n];
    for(long int i = 0; i < n; i++)
        cin >> arr[i];
    rotateArray(arr, d, n);
    printArray(arr, n);
}
