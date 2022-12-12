#include <bits/stdc++.h>
using namespace std;

// implement min heapify without class
void min_heapify(int arr[], int n, int i) {
    int smallest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] < arr[smallest])
        smallest = l;

    if (r < n && arr[r] < arr[smallest])
        smallest = r;

    if (smallest != i) {
        swap(arr[i], arr[smallest]);
        min_heapify(arr, n, smallest);
    }
}

void build_min_heap(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        min_heapify(arr, n, i);
}

void print_heap(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = { 1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17 };
    int n = sizeof(arr) / sizeof(arr[0]);

    build_min_heap(arr, n);
    print_heap(arr, n);

    return 0;
}
