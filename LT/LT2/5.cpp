#include <iostream>
using namespace std;

int occur(int arr[], int n, int k) {
    int res = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == k) res++;
    }
    return res;
}

int main()
{
    int n; cin >> n;
    int arr[n]; for(int i = 0; i < n; i++) cin >> arr[i];

    for(int i = 0; i < n; i++) {
        int j;
        for(j = 0; j < n; j++) {
            if(arr[i] == arr[j]) break;
        }
        if(i == j)
            cout << arr[i] << " occurs " << occur(arr, n, arr[i]) << " times\n";
    }

    return 0;
}
