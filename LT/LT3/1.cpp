#include <iostream>
using namespace std;

int main()
{
    int arr[3][4] = {
        {1, 6, 7, 9},
        {2, 4, 8, 5},
        {3, 1, 9, 4}
    };

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}