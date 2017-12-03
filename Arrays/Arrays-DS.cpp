#include <iostream>
using namespace std;

int main(){
    int n, i;
    cin >> n;
    int arr[n];
    for(i = 0; i < n; i++)
        cin >> arr[i];
    int start = 0, end = n - 1;
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for(i = 0; i < n; i++)
        cout << arr[i] << " ";
}
