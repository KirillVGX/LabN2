#include <iostream>
#include <Windows.h> 
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int year1, year2;

    cout << "Введіть перший рік: ";
    cin >> year1;

    cout << "Введіть другий рік: ";
    cin >> year2;

    int minus = year2 - year1;
    cout << "Пройшло років: " << minus << endl;

    if (minus > 100) {
        cout << "Різниця між роками більше ніж 100. Вихід з програми." << endl;
        return 0;
    }

    int n = 0;
    cout << "Кожен 10-й рік між " << year1 << " та " << year2 << ": ";

    for (int i = year1; i <= year2; i++) {
        if ((i - year1) % 10 == 0) {
            cout << i << " ";
            n++;
        }
    }
    cout << endl;
    cout << "Кількість десятків: " << n << endl;

    return 0;
}