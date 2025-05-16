#include <iostream>
#include <iomanip>
#include <clocale>
#include <windows.h> // Для работы с кодировкой в Windows

using namespace std;

int main() {
    // Настройка кодировки и локали для кириллицы
    SetConsoleOutputCP(1251); // Кодировка вывода Windows-1251
    SetConsoleCP(1251);       // Кодировка ввода Windows-1251
    setlocale(LC_ALL, "Russian");

    // Вывод заголовка для таблицы ИЛИ
    cout << "Таблица истинности для оператора ИЛИ (||):" << endl;
    cout << "----------------------------------------" << endl;
    cout << left << setw(10) << "A" << setw(10) << "B" << setw(10) << "A || B" << endl;
    cout << "----------------------------------------" << endl;
    
    // Вывод всех комбинаций для ИЛИ
    cout << setw(10) << true << setw(10) << true << setw(10) << (true || true) << endl;
    cout << setw(10) << false << setw(10) << true << setw(10) << (false || true) << endl;
    cout << setw(10) << true << setw(10) << false << setw(10) << (true || false) << endl;
    cout << setw(10) << false << setw(10) << false << setw(10) << (false || false) << endl;

    // Вывод заголовка для таблицы И
    cout << "\nТаблица истинности для оператора И (&&):" << endl;
    cout << "----------------------------------------" << endl;
    cout << left << setw(10) << "A" << setw(10) << "B" << setw(10) << "A && B" << endl;
    cout << "----------------------------------------" << endl;
    
    // Вывод всех комбинаций для И
    cout << setw(10) << true << setw(10) << true << setw(10) << (true && true) << endl;
    cout << setw(10) << false << setw(10) << true << setw(10) << (false && true) << endl;
    cout << setw(10) << true << setw(10) << false << setw(10) << (true && false) << endl;
    cout << setw(10) << false << setw(10) << false << setw(10) << (false && false) << endl;

    // Ожидание нажатия Enter перед закрытием консоли
    cout << "\nНажмите Enter для выхода...";
    cin.ignore(); // Очистка буфера ввода
    cin.get();    // Ожидание ввода

    return 0;
}