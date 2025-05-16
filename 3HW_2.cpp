#include <iostream>
#include <clocale>
#include <windows.h>

using namespace std;

int main() {
    // Настройка кодировки для русского языка
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int a, b, c;
    
    // Ввод чисел
    cout << "Введите первое число: ";
    cin >> a;
    
    cout << "Введите второе число: ";
    cin >> b;
    
    cout << "Введите третье число: ";
    cin >> c;

    // Определение порядка с помощью тернарных операторов
    int first = (a > b && a > c) ? a : (b > c ? b : c);
    int third = (a < b && a < c) ? a : (b < c ? b : c);
    int second = (a != first && a != third) ? a : ((b != first && b != third) ? b : c);

    // Вывод результата
    cout << "Результат: " << first << " " << second << " " << third << endl;

    // Ожидание выхода
    cout << "Нажмите Enter для выхода...";
    cin.ignore();
    cin.get();

    return 0;
}