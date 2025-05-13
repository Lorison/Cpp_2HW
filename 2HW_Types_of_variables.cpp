#include <iostream>
#include <clocale>
#include <string>
#include <limits>
#include <windows.h> // Для SetConsoleOutputCP

int main() {
    // Настройка кодировок
    SetConsoleOutputCP(CP_UTF8); // Устанавливаем UTF-8 для вывода
    setlocale(LC_ALL, "Russian"); // Дублируем настройки для стандартных функций

    // Задание 1: Ввод числа
    int number;
    std::cout << "Введите число: ";
    std::cin >> number;
    std::cout << "Вы ввели: " << number << "\n\n";

    // Очистка буфера
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Задание 2: Ввод и вывод слова
    std::string word;
    std::cout << "Введите слово: ";
    std::getline(std::cin, word);
    std::cout << "Вы ввели:\n" << word << "\n";

    // Завершение
    std::cout << "\nНажмите Enter для выхода...";
    std::cin.get();
    return 0;
}
