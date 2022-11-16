#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n]; for(int i = 0; i < n; i++) cin >> a[i];
    int m; cin >> m;
    int b[m]; for(int i = 0; i < m; i++) cin >> b[i];

    int res[n+m], cnt = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(a[i] == b[j]) res[cnt++] = a[i];
        }
    }

    for(int i = 0; i < cnt; i++)
        cout << res[i] << " ";
    cout << endl;

    return 0;
}
