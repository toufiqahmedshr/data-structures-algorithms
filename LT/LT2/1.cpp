#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n]; for(int i = 0; i < n; i++) cin >> a[i];
    int m; cin >> m;
    int b[m]; for(int i = 0; i < m; i++) cin >> b[i];

    int merged[n+m];

    for(int i = 0; i < n; i++) merged[i] = a[i];
    for(int i = 0; i < m; i++) merged[n+i] = b[i];

    for(int i = n+m-1; i >= 0; i--)
        cout << merged[i] << " ";
    cout << endl;

    return 0;
}
