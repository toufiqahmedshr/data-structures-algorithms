#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int arr[n]; for(int i = 0; i < n; i++) cin >> arr[i];

    int res[n], cnt = 0;

    for(int i = 0; i < n; i++) {
        int j;
        for(j = 0; j < n; j++) {
            if(arr[i] == arr[j]) break;
        }
        if(i == j) res[cnt++] = arr[i];
    }

    for(int i = 0; i < cnt; i++)
        cout << res[i] << " ";
    cout << endl;

    return 0;
}
