#include <iostream>
using namespace std;

int main()
{
    int a[3][3], b[3][3], c[3][3], res[3][3];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) cin >> a[i][j];
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) cin >> b[i][j];
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) cin >> c[i][j];
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) res[i][j] = a[i][j] + b[i][j] + c[i][j];
    }

    return 0;
}
