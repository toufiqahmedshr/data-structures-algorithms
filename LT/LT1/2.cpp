#include <iostream>
using namespace std;

int evnCount(int arr[], int n) {
    int res = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) res++;
    }
    return res;
}

int oddCount(int arr[], int n) {
    int res = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 1) res++;
    }
    return res;
}

int main()
{
    int n; cin >> n;
    int arr[n]; for(int i = 0; i < n; i++) cin >> arr[i];

    int evn = 0, odd = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) evn++;
        else odd++;
    }
    cout << "Even: " << evn << "\nOdd: " << odd << endl;

    cout << "Even: " << evnCount(arr, n) << "\nOdd: " << oddCount(arr, n) << endl;

    return 0;
}
