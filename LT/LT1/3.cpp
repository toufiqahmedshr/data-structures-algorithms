#include <iostream>
using namespace std;

void printOddSeq(int a, int b) {
    for(int i = a; i <= b; i++) {
        if(i % 2 == 1) cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int a, b; cin >> a >> b;
    printOddSeq(a, b);

    return 0;
}
