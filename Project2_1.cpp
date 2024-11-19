#include <iostream>
#include <Windows.h> 
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n, a = 0, b = 0, c = 0;
    cout << "Введіть N: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        c += i;     
        if (i % 2 == 0) {
            cout << i << " ";  
            a += i;     
        }
        else {
            b += i;      
        }
    }
    cout << endl;

    cout << "Сума парних чисел: " << a << endl;
    cout << "Сума непарних чисел: " << b << endl;
    cout << "Загальна сума всіх чисел: " << c << endl;

    int summa = a + b + c;
    float result = summa / 2;

    cout << "Результат: " << result << endl;

    return 0;
}
