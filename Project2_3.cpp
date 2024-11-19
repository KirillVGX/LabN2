#include <iostream>
#include <Windows.h> 
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int h;
    int j, i;

    cout << "Введіть висоту трикутника: ";
    cin >> h;

    for (i = 1; i <= h; i++) {
        for (j = 1; j <= h - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}   
