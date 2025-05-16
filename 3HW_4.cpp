#include <iostream>
#include <string>
#include <clocale>
#include <windows.h>

using namespace std;

// Проверка диапазона
string numberToText(int num) {
    if (num < -99 || num > 99) return "";

    // Массивы текстовых представлений
    string units[] = {"", "один", "два", "три", "четыре", "пять", 
                     "шесть", "семь", "восемь", "девять"};
    string teens[] = {"десять", "одиннадцать", "двенадцать", "тринадцать",
                     "четырнадцать", "пятнадцать", "шестнадцать",
                     "семнадцать", "восемнадцать", "девятнадцать"};
    string tens[] = {"", "десять", "двадцать", "тридцать", "сорок",
                    "пятьдесят", "шестьдесят", "семьдесят",
                    "восемьдесят", "девяносто"};

    if (num == 0) return "ноль";
    
    string result;
    bool negative = false;
    
    // Обработка отрицательных чисел
    if (num < 0) {
        negative = true;
        num = -num;
    }

    // Логика формирования текста:
    if (num >= 20) {
        result = tens[num / 10];
        if (num % 10 != 0) {
            result += " " + units[num % 10];
        }
    } else if (num >= 10) {
        result = teens[num - 10];
    } else {
        result = units[num];
    }

    if (negative) {
        result = "минус " + result;
    }

    return result;
}
// Настройка кириллицы
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");

    // Ввод чисел
    int num1, num2;
    
    cout << "Введите целое число: ";
    cin >> num1;
    
    cout << "Введите целое число: ";
    cin >> num2;

    // Проверка диапазона (-99 до 99)
    if (num1 <= -100 || num1 >= 100 || num2 <= -100 || num2 >= 100) {
        cout << "Ошибка! Одно из чисел вне диапазона!" << endl;
        system("pause");  // Задержка перед закрытием
        return 0;
    }

    // Преобразование в текст
    string text1 = numberToText(num1);
    string text2 = numberToText(num2);

    // Сравнение и вывод результата
    if (num1 < num2) {
        cout << text1 << " меньше чем " << text2 << endl;
    } else if (num1 > num2) {
        cout << text1 << " больше чем " << text2 << endl;
    } else {
        cout << text1 << " равно " << text2 << endl;
    }

    // Задержка перед закрытием консоли
    cout << "\nНажмите Enter для выхода...";
    cin.ignore();  // Очистка буфера
    cin.get();     // Ожидание нажатия Enter

    return 0;
}