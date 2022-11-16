#include <iostream>
using namespace std;


struct Student {
    int id;
    int numOfCredits;
    double cgpa;
};

int main()
{
    Student s[10];

    for(int i = 0; i < 10; i++) {
        cout << "Enter ID: "; cin >> s[i].id;
        cout << "Enter number of credits: "; cin >> s[i].numOfCredits;
        cout << "Enter CGPA: "; cin >> s[i].cgpa;
    }

    cout << endl;

    for(int i = 0; i < 10; i++) {
        if(s[i].cgpa > 3.75) {
            cout << "ID: " << s[i].id << endl;
            cout << "Number of credits: " << s[i].numOfCredits << endl;
            cout << "CGPA: " << s[i].cgpa << endl;
            cout << endl;
        }
    }

    for(int i = 0; i < 10; i++) {
        if(s[i].numOfCredits > 50) {
            cout << "ID: " << s[i].id << endl;
            cout << "Number of credits: " << s[i].numOfCredits << endl;
            cout << "CGPA: " << s[i].cgpa << endl;
            cout << endl;
        }
    }

    return 0;
}