#include <iostream>
#include <ctime>
using namespace std;
void  printarr(int* a, int c) {
    for (int i = 0; i < c; i++) {
        cout << a[i];
        if (i != c - 1)
            cout << " ";
    }
    cout << endl;
}
int main()
{
    srand(time(0));
    const int N = 5;
    int arr[N], y, min;
    for (int i = 0; i < N; i++)
        arr[i] = rand() % 100;
    printarr(arr, N);
    for (int i = 0; i < N; i++) {
        min = i;
        for (int j = i + 1; j < N; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        y = arr[i];
        arr[i] = arr[min];
        arr[min] = y;
    }
    printarr(arr, N);
    return 0;
}
