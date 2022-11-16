#include <iostream>
using namespace std;

int factorial(int n) {
    int res = 1;
    for(int i = n; i > 0; i--) {
        res = res * i;
    }
    return res;
}

int main()
{
    int n; cin >> n;

    cout << "Factorial of " << n << " = " << factorial(n) << endl;

    return 0;
}
