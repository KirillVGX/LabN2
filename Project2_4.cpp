#include <iostream>
#include <Windows.h> 
using namespace std;

bool Just(int num) {
    if (num <= 1) return false; 
    for (int i = 2; i * i <= num; i++) { 
        if (num % i == 0) return false;  
    }
    return true;  
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int N;

    cout << "Введіть число N: ";
    cin >> N;

    cout << "Прості числа від 1 до " << N << ": ";
    for (int i = 2; i <= N; i++) {
        if (Just(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
//Напишіть програму, яка виводить усі прості числа від 1 до N (використовуйте цикл та перевірку на простоту).